---
layout: post
title: Reflection in Exile
---

[Reflection](https://en.wikipedia.org/wiki/Reflection_(computer_programming)), specifically type introspection, is an immensely useful feature provided by many modern languages. By enabling a way to inspect the properties of types&mdash;for example, the types of the members of a data structure&mdash;introspection allows one to write much more general and effective generic code, enforce interfaces/contracts, and more. 

<!--end_excerpt-->

Though most obviously found in dynamic languages, introspection is just as powerful in compiled, statically typed languages such as [Go](https://blog.golang.org/laws-of-reflection) and [JAI](https://www.youtube.com/watch?v=JoNkttD_MUs). Unfortunately, C++ does not support run-time reflection as a language feature, and template-based compile-time reflection is neither standardized, elegant, nor robust. Standards proposals have been put forward to add reflection features, but an implementation is still rather far off. Further, [libraries](https://github.com/rttrorg/rttr) aiming to provide run-time reflection typically require laborious setup for each type you wish to make reflect-able. 

For [exile](https://github.com/TheNumbat/exile), I wanted to use run-time reflection to power truly type-agnostic serialization and UI, but I did not want the code overhead of specifying meta-info for all of my types. Inspired by JAI's model, I chose to implement a library-level reflection system via meta-programming. Combined with exile's [hot reloading system](https://thenumbat.github.io/Hot-Reloading-in-Exile/), I find the environment very conducive to iteration and prototyping&mdash;even in a very C-like dialect of C++.

## Usage

The end result allowed me to write code such as this, to print any structure:  
<em>([Full Implementation](https://github.com/TheNumbat/exile/blob/master/src/engine/ds/string.cpp#L282))</em>

```c++
template<typename T>
void print_struct(T value) { 
	
	uint8_t* addr = &value;
	_type_info* info = TYPEINFO(T);

	print(info->name);
	
	print('{');
	for(int i = 0; i < info->_struct.member_count; i++) {

		print(info->_struct.member_names[i]);
		print(" : ");

		uint8_t* member_addr = addr + info->_struct.member_offsets[i];
		_type_info* member_type = TYPEINFO_H(info->_struct.member_types[i]);

		print_type(member_addr, member_type);

		if(i < info->_struct.member_count - 1) {
			print(", ");
		}
	}
	print('}');
}
```
Usage:

```c++
struct inner {
	int i = 10;
	float f = 10.0f;
};

struct outer {
	string name = "Data!";
	inner data;
};

outer o;
print(o);
```
Result:

```
outer{name : "Data!", data : inner{i : 10, f : 10.0}}
```

## Structure

The reflection system relies on a global (thread-local) table that contains all type information. This is a simple hash map that maps from ``type_id`` to ``_type_info``, which is a discriminated union containing the type's size, name, type (that is, integer, floating point, pointer, structure, etc), and associated information, such as member values and names.  
<em>([Full Implementation](https://github.com/TheNumbat/exile/blob/master/src/engine/util/type_table.h))</em>

```c++
enum class Type : uint8_t {
	_void,
	_int,
	_float,
	_ptr,
	_struct,
	// ...array, enum, etc...
};

struct Type_void_info {};
struct Type_int_info {
	bool is_signed = false;
};
struct Type_float_info {};
struct Type_bool_info {};
struct Type_ptr_info {
	type_id to = 0;
};
struct Type_struct_info {
	string 		member_names[64];
	type_id		member_types[64]   = {};
	uint32_t 	member_offsets[64] = {};
	uint32_t 	member_count       = 0;
};

struct _type_info {
	
	Type type_type 	= Type::_void;
	type_id hash;

	uint64_t size   = 0;
	string name;

	union {
		Type_void_info	 _void;
		Type_int_info    _int;
		Type_float_info  _float;
		Type_bool_info   _bool;
		Type_ptr_info    _ptr;
		Type_struct_info _struct;
	};
};
```

Retrieving the meta-information for a type is straightforward: a ``type_id`` is easily derived from C++'s built-in ``typeid`` operator using ``hash_code()``. Technically, ``hash_code()`` is not guaranteed to never collide, so ``std::type_index()`` is the more robust option. However, I have not had a problem using ``hash_code()``. Note that because ``typeid`` is only ever used on compile-time known types (that is, not polymorphic objects), this code works properly with [RTTI](https://www.geeksforgeeks.org/g-fact-33/) disabled, which I compile without. 

```c++
// ...last example...

map<type_id,_type_info> type_table;

template<typename T>
struct _get_type_info { 
	
	static _type_info* get_type_info() {

		return type_table.try_get((type_id)typeid(T).hash_code());
	}
};

// get by compile-time type
#define TYPEINFO(...) _get_type_info< __VA_ARGS__ >::get_type_info()

// get by hash
#define TYPEINFO_H(h) type_table.try_get(h)
```

Providing the ``TYPEINFO()`` syntax requires a bit of macro trickery via varargs to group incorrectly comma-delinated template types and a static member function for arbitrary specialization.

Getting information for pointers is slightly more complicated: there's no limit on how many different types of pointers that exist, so we can't populate the table with all of them! Instead, we automatically generate and add a ``_type_info`` when a type of pointer is requested that we haven't seen before. This is possible because using [SFINAE](https://en.wikipedia.org/wiki/Substitution_failure_is_not_an_error), we can extract the pointed-to type of a request, and set our pointer ``_type_info`` to refer to the correct entry in the type table. Because getting the information for an underlying type is a recursive process, this automatically works for multiple indirections: requesting an ``int**`` will create an entry for ``int**`` that refers to a new entry ``int*`` which refers to ``int``.

```c++
// ...last example...

template<typename T>
struct _get_type_info<T*> {

	static _type_info* get_type_info() {

		_type_info* info = type_table.try_get((type_id)typeid(T*).hash_code());
		if(info) return info;

		_type_info* to = TYPEINFO(T);

		_type_info ptr_t;
		
		ptr_t.type_type = Type::_ptr;
		ptr_t.hash 		= (type_id)typeid(T*).hash_code();

		ptr_t.size 		= sizeof(T*);
		ptr_t.name 		= to->name;
		
		ptr_t._ptr.to 	= to->hash;
		
		return type_table.insert(ptr_t.hash, ptr_t);
	}
};
```

Fully built out, along with some utility functions such as enum-stringification and any-width integer load/store, this system is all that is needed to preform very powerful introspection operations. For example, custom UI elements for any type:  
<em>([Full Implementation](https://github.com/TheNumbat/exile/blob/master/src/engine/imgui.cpp#L194))</em>

```c++
ImGui::EditAny("cam", &camera);
```
<div style="text-align: center;"><img src="/assets/reflection/ui.png"></div>

## Metaprogramming

Now, the type table isn't especially useful if you have to manually populate it with type information. This is where the metaprogramming comes in: instead of relying on a language feature, I wrote a separate program using [libclang](https://clang.llvm.org/doxygen/group__CINDEX.html) to automatically generate the code that populates the type table on startup.

libclang is a C binding for LLVM's clang compiler frontend. While not as powerful as the full C++ interface in [libtooling](https://clang.llvm.org/docs/LibTooling.html) or plug-ins for clang itself, it provides enough access to the parsed and type-checked AST for this use case. (See [limitations](#limitations)).

The basic structure of the meta-program is quite simple: use libclang to parse the C++ source, traverse the AST to pick out type definitions, and generate the code corresponding to each type. Several complications arise when dealing with dependent types (ordering) and instantiating templates (duplication/dependency info), but for the basic case of ordered C-style structs, everything works intuitively. For brevity, most of the code is not included here.  
<em>([Full Implementation](https://github.com/TheNumbat/exile/blob/master/src/tools/meta.cpp))</em>

```c++
auto index = clang_createIndex(0, 0);
auto unit = clang_parseTranslationUnit(index, "path/to/code", 0, 0,
                                       nullptr, 0, CXTranslationUnit_KeepGoing);

auto cursor = clang_getTranslationUnitCursor(unit);

clang_visitChildren(cursor,
[](CXCursor c, CXCursor parent, CXClientData client_data) {

	parse_type(c);

	return CXChildVisit_Recurse;

}, nullptr);
```

Once a list of types is built from the AST, code is output to a file that is included by the game. The build system typically invokes the meta-program right before compiling the source.  
<em>([Full Output](/assets/reflection/meta_types.cpp))</em>

```c++
// example output for the "any" struct

[]() -> void {
	_type_info this_type_info;
	
	this_type_info.type_type = Type::_struct;
	this_type_info.size = sizeof(any);
	this_type_info.name = "any"_;
	this_type_info.hash = (type_id)typeid(any).hash_code();
	
	this_type_info._struct.member_count = 2;
	
	this_type_info._struct.member_types[0] = TYPEINFO(type_id) ? TYPEINFO(type_id)->hash : 0;
	this_type_info._struct.member_names[0] = "id"_;
	this_type_info._struct.member_offsets[0] = offsetof(any,id);
	
	this_type_info._struct.member_types[1] = TYPEINFO(void *) ? TYPEINFO(void *)->hash : 0;
	this_type_info._struct.member_names[1] = "value"_;
	this_type_info._struct.member_offsets[1] = offsetof(any,value);
	
	type_table.insert(this_type_info.hash, this_type_info, false);
}();
```

Finally, when the reflection system starts up, it invokes the function output by the meta-program, properly filling out the type table.

## Limitations

*In July 2019, the meta-program was rewritten to robustly handle nested templates and circular dependencies.*

My implementation of the meta-program with libclang is lacking in some areas: the way in which type information is stored prevents circularly dependent types from being output with correct dependencies. Similarly, it cannot decode deeply nested templates. A truly robust implementation would traverse (or rebuild) clang's representation of the type dependancy graph rather than operating directly from the C++ AST. I plan to upgrade the tool to use libtooling in the future, but the current state is adequate, as the limitations may be worked around. A further upgrade may involve outputting a generic data format that is parsed by the run-time library rather than outputting code that is compiled into the build.

Further, this system does not reflect any OOP concepts such as methods, constructors/destructors, and inheritance, and is hence not really suitable for use with general modern C++. It was made to suit exile's C-style types with templates, and works accordingly. Such a system for modern C++ is hopefully in the works, and I'd be exited to play around with it.
