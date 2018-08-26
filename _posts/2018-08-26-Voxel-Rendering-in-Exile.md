---
layout: post
title: Voxel Rendering in Exile
draft: true
---

No, [Exile](https://github.com/TheNumbat/exile) is not technically a "voxel" engine. A real voxel engine unifies objects, textures, and more into colored voxel data, rendering them via raymarching/marching cubes/etc., and can target realism. Instead, Exile is a "voxel" engine in that it's a traditional 3D engine that happens to focus on representing and drawing textured cubes (like Minecraft and related games). Some have worked around the linguistic confusion by christening this technique ["Swedish cubes"](https://yave.handmade.network/), but for the purposes of this post, please assume that voxels imply textured cubes.

## Voxels

Representing a game world with voxels provides several distinct advantages:
<dl>
	<dt>Interactivity</dt>
	<dd>Voxels provide an obvious way for the player to build, edit, and destroy the world however they wish.</dd>
	<dt>Systems</dt>
	<dd>Having a natural world grid allows procedural generation, NPCs, logistic systems, and the like to seamlessly integrate into the environment.</dd>
	<dt>Performance</dt>
	<dd>Many optimizations (lighting, meshing, AO, culling, pathing, etc.) are available when working with voxel data, resulting in good performance scaling.</dd>
	<dt>Aesthetics</dt>
	<dd>Subjectively, voxel worlds can look more better from farther distances than traditional mesh-based worlds while being more compact.</dd>
</dl>

<div style="text-align: center"><img src="../assets/minecraft-shaders.png"></div>

Of course, voxels are not without some disadvantages:
- Not for realism, and can look unnatural when mixed with non-voxel elements.
- No natural LOD algorithm (for cube-like systems).
- Likely others I haven't run into.

So voxels are cool, but hasn't this already been done by Minecraft, Minetest, Creativerse, FortressCraft, etc? That's not even counting the many games that render voxel worlds with a non-cube-like asethetic. Well, maybe it has, but I believe there's work to be done in integrating the technical advancements of a variety of techniques, from user interaction and world generation to new representations and graphics techniques. 

One of the motivating factors for this project was frustration with the state of modded Minecraft: as complex and interesting as the game can be, it suffers from countless technical problems, performance bottlenecks, and compatibility issues, all of which could be solved under a new platform built with extensibility and performance as top priorities. This is my aspiration for Exile, but the project has also served as a learning experience: deciding to start from absolute scratch has led me to learn about the interconnected workings of everything in a 3D engine, from platform services to data structures to debug interfaces and voxel worlds.

## World

## Meshing

## Rendering

## Vertex Format

## Vertex Setup

## Ambient Occlusion

## Block Models

## Lighting
