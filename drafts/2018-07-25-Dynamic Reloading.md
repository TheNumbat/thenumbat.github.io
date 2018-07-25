---
layout: post
title: Code Reloading in Exile
---

In game development, one of the main draws of implementing game logic in a scripting language like Lua is the convenient ability to make changes to the source, reload the logic on the fly, and test the changes without restarting the game. A similar technique is also often used to refresh shader programs, asset files, and the like. 

However, supporting a secondary scripting language&mdash;or using one from the start&mdash;is not the only way to implement such a system. While rather more complicated, implementing the ability to reload code on a binary level allows one to make potentially deep changes to the entire source and have them appear instantly. Further, any language that can export C ABI compatible functions can be dynamically loaded in this manner, using good old-fashioned dynamic link libraries/shared objects. 

I used this technique to implement hot-reloading the full C++ source of [Exile](https://github.com/TheNumbat/exile). The system provides many benefits, but also required conforming to several caveats.

## Structure

The start-up of exile follows several distinct steps:
1. The main executable initializes platform-specific code and loads the engine dynamic library. 
2. The control functions are loaded and execution passes to the library.
3. The library initializes engine/game state and passes control back to the main executable.
4. The main executable enters the main loop, which 

---

Outline
- Intro
- How I did it
- Platform integration
- Benefits
- Caveats
- Fixing caveats
- Other methods

Pros:
- Dynamic reloading
- Totally decoupled platform abstraction
- Contained state
Cons:
- Memory must be allocated outside dll
	- No globals/statics
- No virtual functions
	- Hacky function pointers
- No memory layout changes of existing objects (needs serialization)

Other Methods:
	Serialize/deserialize everything
	Binary patching - fixes most of these issues, but much more complicated Live++
	JIT languages
