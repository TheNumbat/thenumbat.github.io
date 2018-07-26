---
layout: post
title: Code Reloading in Exile
draft: true
---

In game development, one of the main draws of implementing game logic in a scripting language like Lua is the convenient ability to make changes to the source, reload the logic on the fly, and test the changes without restarting the game. A similar technique is also often used to refresh shader programs, asset files, and the like. 

However, supporting a secondary scripting language&mdash;or using one from the start&mdash;is not the only way to implement such a system. While rather more complicated, implementing the ability to reload code on a binary level allows one to make potentially deep changes to the entire source and have them appear instantly. Further, any language that can export C ABI compatible functions can be dynamically loaded in this manner, using good old-fashioned dynamic link libraries/shared objects. 

I used this technique to implement hot-reloading the full C++ source of [Exile](https://github.com/TheNumbat/exile). The system provides many benefits, but also required conforming to several caveats.

<video src="assets/exilereload.mp4" width="320" height="200" preload></video>

## Structure

The actual implementation in [Exile](https://github.com/TheNumbat/exile) is somewhat more complicated than described here, due to supporting multiple platforms and solving several caveats. This post intends to present the basic structure of the technique.

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
	GetFileAttributesEx("path/to/game.dll", GetFileExInfoStandard, &attribs);
	
	while(main_loop(state)) {

		WIN32_FILE_ATTRIBUTE_DATA new_attribs;
		GetFileAttributesEx("path/to/game.dll", GetFileExInfoStandard, &new_attribs);
		
		if(CompareFileTime(attribs.ftLastWriteTime, new_attribs.ftLastWriteTime) == -1) {

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

And voilà! You have hot reloading...in principle. The benefits are numerous: fast and convenient gameplay iteration, a clear platform-specific code boundary, and centralized state, for example. While this structure is all that is needed to support swapping out old and new code, there are several more problems to solve.

## Memory

If you're familiar with the semantics of loading/freeing dynamic library objects, you may be concerned about what happens to memory allocated by our library when we reload it&mdash;it disappears. When a library is unloaded, its memory is removed from the address space of the process that loaded it. This means that we can't depend on any library-owned memory, including both globals/statics and heap allocations.

Hence, there are two ways to access the heap in a persistent manner:
1. Virtually preallocate a very large block of memory in the main executable and pass it to the library. The library can then use a custom allocator to slice up the block.
2. Expose the main executable's memory allocation functions to the library via the platform API. For example, this could mean including pointers to malloc and free.

Either way, one still can't depend on global or static variables having persistent values. This, at least, can be worked around in code.

In exile, I chose the second approach, as it meshed well with my platform abstraction approach: passing a structure of platform abstracted function pointers from the main executable to the (platform-agnostic) library. However, the first option provides more flexibility and potentially more performance, as one can choose an allocator tuned for their use case (including profiling features), and each allocate/free does not have to go through a pointer indirection. For these reasons, I intend to switch exile's approach in the future.

---

Outline
- Caveats
- Fixing caveats
- Other methods

Pros:
- Totally decoupled platform abstraction
Cons:
- Memory must be allocated outside dll
	- No globals/statics
- Threads have to be restarted
- No virtual functions
	- Hacky function pointers
- No memory layout changes of existing objects (needs serialization)

Other Methods:
	Serialize/deserialize everything
	Binary patching - fixes most of these issues, but much more complicated Live++
	JIT languages
