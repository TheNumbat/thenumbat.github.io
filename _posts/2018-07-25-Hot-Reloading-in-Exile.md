---
layout: post
title: Code Reloading in Exile
---

In game development, one of the main draws of implementing game logic in a scripting language like Lua is the convenient ability to make changes to the source, reload the logic on the fly, and test the changes without restarting the game. A similar technique is also often used to refresh shader programs, asset files, and the like. 

However, supporting a secondary scripting language&mdash;or using one from the start&mdash;is not the only way to implement such a system. While more complicated, implementing the ability to reload code on a binary level allows one to make potentially deep changes to the entire source and have them appear instantly. Further, any language that can export C ABI compatible functions can be dynamically loaded in this manner, using good old-fashioned dynamic link libraries/shared objects. 

I used this technique to implement hot-reloading the full C++ source of [Exile](https://github.com/TheNumbat/exile). The system provides many benefits, such as fast and convenient gameplay iteration, a clear platform-specific code boundary, and centralized state. This post focuses on the several caveats I had to work around, but I have still found maintaining the system to be worthwhile and educational.

<video src="../assets/reload.mp4" preload autoplay muted loop style="max-width: 100%; margin: 0 auto;"></video>

## Structure

The actual implementation in [Exile](https://github.com/TheNumbat/exile) is somewhat more complicated than described here, due to supporting multiple platforms and solving the issues below. This post intends to present the basic structure of the technique.

Running a re-loadable binary follows three basic steps:
1. Load the dynamic code and its start-up, loop, and shut-down functions. Call start-up.
2. Enter the main loop. Call loop. After each iteration, check if the library file has been overwritten. If so, reload the library and its control functions.
3. On quit, call shut-down and unload the library.

For example, on windows, the library API would be written as such:

```c++

#include "platform_api.h"

extern "C" {

    __declspec(dllexport) void* start_up(platform_api* api) {

        // allocate/initialize state...

        return state;
    }

    __declspec(dllexport) bool main_loop(engine* state) {

        // run frame...

        return state->is_running;
    }

    __declspec(dllexport) void shut_down(engine* state) {

        // destroy/free state...
    }
}
```

And the main executable:

```c++

#include <windows.h>
#include "platform_api.h"

typedef void* (*start_up_t)(platform_api*);
typedef bool  (*main_loop_t)(void*);
typedef void  (*shut_down_t)(void*);

HANDLE library;

start_up_t  start_up;
main_loop_t main_loop;
shut_down_t shut_down;

void load_library() {

    library = LoadLibrary("path/to/game.dll");

    start_up  = GetProcAddress(library, "start_up");
    main_loop = GetProcAddress(library, "main_loop");
    shut_down = GetProcAddress(library, "shut_down");
}

void free_library() {

    FreeLibrary(library);
    start_up = main_loop = shut_down = nullptr;
}

int main() {

    load_library();

    platform_api api;

    void* state = start_up(&api);

    WIN32_FILE_ATTRIBUTE_DATA attribs;
    GetFileAttributesEx("path/to/game.dll", GetFileExInfoStandard,
                        &attribs);
    
    while(main_loop(state)) {

        WIN32_FILE_ATTRIBUTE_DATA new_attribs;
        GetFileAttributesEx("path/to/game.dll", GetFileExInfoStandard,
                            &new_attribs);
        
        if(CompareFileTime(attribs.ftLastWriteTime, 
                           new_attribs.ftLastWriteTime) == -1) {

            free_library();
            load_library();
        }

        attribs = new_attribs;
    }

    shut_down(state);

    free_library();

    return 0;
}
```

And voilà! You have hot reloading...in principle. While this structure is all that is needed to support swapping out old and new code, there are several more problems to solve.

## Memory

If you're familiar with the semantics of loading/freeing dynamic library objects, you may be concerned about what happens to memory allocated by our library when we reload it&mdash;it disappears. When a library is unloaded, its memory is removed from the address space of the process that loaded it. This means that we can't depend on any library-owned memory, including both globals/statics and heap allocations.

Hence, there are two ways to access the heap in a persistent manner:
1. Virtually preallocate a very large block of memory in the main executable and pass it to the library. The library can then use a custom allocator to slice up the block.
2. Expose the main executable's memory allocation functions to the library via the platform API. For example, this could mean including pointers to malloc and free.

Either way, one still can't depend on global or static variables having persistent values. This, at least, can be worked around in code.

In exile, I chose the second option, as it meshed well with my platform abstraction approach: passing a structure of platform abstracted function pointers from the main executable to the (platform-agnostic) library. However, the first option provides more flexibility and potentially more performance, as one can choose an allocator tuned for their use case (including profiling features), and each allocate/free does not have to go through a pointer indirection. For these reasons, I intend to switch exile's approach in the future.

## Threads

When the library is unloaded, threads it created are not terminated. This is not good: the memory for each thread's stack frame and any thread-local storage is associated with the library, and is invalidated when it is freed! Because of this, if our library creates threads, they must be terminated and restarted before and after each dynamic reload. To implement this we can simply add ``begin_reload`` and ``end_reload`` functions to our library API and call them from the main executable appropriately. Unfortunately, this does mean that each thread must complete the currently running (atomic) task before the reload can take place, leading to possible slowdowns when reloading.

## Function Pointers

Persistently storing function pointers significantly limits the type of changes that can be reloaded successfully. This is because if the patched library contains new, different, or less functions than the previous version, their relative locations in its address space may change. And that means that previously stored function pointers are invalidated. On the other hand, taking addresses of functions on a per-frame basis, for example, passing a function to a generic sort, always works correctly, because the new function address is already patched into the code.   

There are another two ways to fix this:
1. Don't use persistent function pointers.
2. Store pointers only to exported functions in conjunction with their name. Reload them when the library is reloaded.

The first option is viable, and forces one to limit "virtual" indirection, but in exile, I decided to use the second option. This is because I thought the flexibility and extensibility of function pointers, especially for a future modding API, was worth the extra indirection. To implement the second option, exile stores function pointers as typed callable objects referencing a global table of raw address-and-name pairs. When the library is reloaded, the engine simply reloads each function from itself. Still, without much more invasive patching, C++ virtual functions cannot be used on objects that persist between reloads.

Simplified implementation:

```c++
struct _FPTR {
    void* func;
    string name;
};

struct func_ptr_state {

    _FPTR all_ptrs[128];
    u32 num_ptrs = 0;
};

template<typename T, typename... args>
struct func_ptr {

    func_ptr(_FPTR* d = null) {data = d;}

    T operator()(args... arg) {

        return ((T(*)(args...))data->func)(arg...);
    }

    _FPTR* data = null;
};

static func_ptr_state* global_func = null;

_FPTR* get_func_ptr(void* func, string name) {

    for(u32 i = 0; i < global_func->num_ptrs; i++) {
        if(global_func->all_ptrs[i].func == func)  {
            return &global_func->all_ptrs[i];
        }
    }

    u32 idx = global_func->num_ptrs;
    global_func->num_ptrs++;

    global_func->all_ptrs[idx].func = func;
    global_func->all_ptrs[idx].name = name;

    return &global_func->all_ptrs[idx];
}

void reload_func_ptrs(platform_dll this_dll) { 

    for(u32 i = 0; i < num_ptrs; i++) {
        get_proc_address(&global_func->all_ptrs[i].func, this_dll, 
                          global_func->all_ptrs[i].name);
    }
}
```

Usage:

```c++
extern "C" __declspec(dllexport) int func(int i) {
    return i + 1;
}

int main() {

    func_ptr<int, int> ptr(get_func_ptr(func, "func"));

    int ret = ptr(5);

    return 0;
}
```

## String Literals

String literals are subject to the same limitations as function pointers: since they are stored in static memory (.rodata), their addresses may change when the library is reloaded. This is relatively easy to work around by not storing pointers to string literals. Instead, either initialize/pass the literals every frame, or make heap-allocated copies for storage.

## Struct Layouts

The last limitation of simple binary reloading is the most difficult to resolve: the conflict between old data and new code that expects a different format. Issues of this nature can be triggered whenever a reload changes the size of a structure&mdash;for example, a previously allocated array of those structures is now all out of alignment, leading to difficult-to-debug crashes. In exile, I've chosen to live with this limitation: reloading is, mostly, most of the time, primarily useful for tweaking existing code without the need to alter data structures. However, if an in-memory update is every truly needed, code to migrate the memory to a new format can just be dynamically patched in and run on reload.

Solving this problem in a general fashion involves serializing all persistent state on unload, and deserializing it into the new format on load. This is achievable using the reflection framework I have also implemented in exile (future post), but I have not found it necessary as of yet.

## Self-Modifying Code

This framework for dynamically reloading C++ can be straightforward to implement, but has a few significant limitations. A more complex method of live binary patching&mdash;without reloading&mdash;such as used in [Live++](https://molecular-matters.com/products_livepp.html), combined with full serialization, could solve all of the problems, but is not so trivial to implement oneself. 
