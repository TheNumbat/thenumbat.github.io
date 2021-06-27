---
layout: post
title: ScottySim
image: scottysim.png
active: false
permalink: /projects/scottysim
---

[Scotty3D](/projects/scotty3d) extensions for inverse kinematics, cloth simulation, and fluid simulation.

<!--end_excerpt-->

---

While taking CMU 15-464 (technical animation) during the spring semester of 2021, I used the course projects to add various animation features to Scotty3D.

## Inverse Kinematics

I implemented and compared a variety of inverse kinematics strategies:
- Cyclic coordinate descent with bouncing
- Numerical jacobian transpose
- Analytic jacobian transpose
- Jacobian pseudo-inverse
- Jacobian pseudo-inverse with damped least squares

<div class="videocontainer">
<iframe src="https://docs.google.com/presentation/d/e/2PACX-1vRVnZEYUXt5x57ftVmSGXmI426uNeytrHdHxcFBrZ0S40R4ffwCjokiC7Ka_7N5HQUlXKT3SUDTH2GZ/embed?start=false&loop=false&delayms=60000" frameborder="0" width="100%" allowfullscreen="true" mozallowfullscreen="true" webkitallowfullscreen="true" class="video"></iframe>
</div>

## Mass-Spring Cloth Simulation

I implemented the following cloth simulation features:
- Mass-spring cloth structure
- Verlet integration with damping
- Spring damping
- Spring length constraints
- Cloth-mesh collisions
- Naive cloth self avoidance 

<div class="videocontainer">
<iframe src="https://docs.google.com/presentation/d/e/2PACX-1vS3XnqvTVZs8pFXU9tFmw8cckAi6Tf6NwNX61niaDSK8e86giWZUv1tVnadcm7GWDbusbTjOnWcCIKv/embed?start=false&loop=false&delayms=60000" frameborder="0" width="100%" class="video" allowfullscreen="true" mozallowfullscreen="true" webkitallowfullscreen="true"></iframe>
</div>

## Position Based Fluid Simulation & Screen Space Fluid Rendering

I implemented the following particle-based fluid simulation features:
- [Position based fluids](https://mmacklin.com/pbf_sig_preprint.pdf)
- Viscosity & vorticity confinement
- Fluid-mesh collisions
- Rendering with path tracing
- Real-time rendering with [screen-space fluid rendering](https://developer.download.nvidia.com/presentations/2010/gdc/Direct3D_Effects.pdf)

<div class="videocontainer">
<iframe src="https://docs.google.com/presentation/d/e/2PACX-1vQ3MXlSiicCx5cImeRaNkdlZI2mfAwZ5nkmX4Xp3Ipu5vfVoWn9gibCDyM1jye7z2emOb_Q03lHa1Vr/embed?start=false&loop=false&delayms=60000" frameborder="0" width="100%" class="video" allowfullscreen="true" mozallowfullscreen="true" webkitallowfullscreen="true"></iframe>
</div>

## Paper Presentation

Additionally, I gave a presentation on the paper [Detailed Rigid Body Simulation with Extended Position Based Dynamics](https://matthias-research.github.io/pages/publications/PBDBodies.pdf).

<div class="videocontainer">
<iframe src="https://docs.google.com/presentation/d/e/2PACX-1vQuBlFoPKhVeiYPEADIdBxoZZvasix79RhZxdy_YxYqxGHYTrJEtJJFi9Ga4NFKSj3rUgZxd0I6exvM/embed?start=false&loop=false&delayms=60000" frameborder="0" width="100%" class="video" allowfullscreen="true" mozallowfullscreen="true" webkitallowfullscreen="true"></iframe>
</div>
<br/>
