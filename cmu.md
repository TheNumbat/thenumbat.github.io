---
layout: page
title: CMU Course Opinions
permalink: /cmu/
---

Inspired by [these](https://wanshenl.me/courses/reviews/) [pages](http://weihang7.github.io/guides/2019/12/19/scs-guide.html), this is my take on my path through CMU (so far).

**Goal:** CS major, computer graphics concentration, and computer systems concentration. I am planning on applying to PhD programs in graphics/systems. I also like algorithms, but focus on the former, which I am better at.

**Background:** I entered CMU with an extensive programming background in both systems and some real-time graphics, as well as a decent undergrad math background. I didn't have any competitive math/programming experience. 

**☆**: courses which I thought were worth attending CMU for. Courses without a star are still worthwhile unless stated otherwise, but one could find a similar experience at other universities.

## Fall 2021 (Preliminary)
- 11-485: Introduction to Deep Learning
- 10-414: Deep Learning Systems: Algorithms and Implementation
- 17-363: Programming Language Pragmatics
- 15-591: Independent Study Research
- 79-395: The Arts in Pittsburgh
- Not 21-360: Differential Geometry of Curves and Surfaces (sad!)

**Other:** Grad school applications.

**Workload:** TBD

**Notes:** TBD

## Summer 2021
- Jane Street: SWE Intern
    - Not graphics, but will be interesting on the systems programming side (I hope).
    - OCaml
    - \$\$\$\$

## Spring 2021
- TA: 15-462 - Computer Graphics
    - Was a bit less interesting this semester as no big changes were introduced. Will probably not TA fall 2021 to free up more time for research work (grad school apps are coming...).
    - This was the second semester we tried moderating a course discord server, and it was quite helpful for facilitating student interactions and getting people to help each other. Also produced several enthusiastic students who will be new TAs and/or Scotty3D contributors!
    - Overall, still same thoughts on TAing.
- 15-400: Research Practicum in Computer Science
    - This is a research project rather than a class. I worked on implementing various BVH strategies for computing closest point queries, and analyzed which perform the best on various hardware architectures (CPU/GPU). We found some interesting results that diverged from previous work on high performance ray tracing, but overall there is no panacea for closest points.
    - I worked with Rohan &amp; Keenan within the geometry collective. All of the GC PhD students are generally very knowledgeable and fun to talk or listen to. 
    - I struggled a lot to find time/motivation for the project during the first half of the semester, but was able to focus more during the second half.
- 15-418: Parallel Computer Architecture and Programming
    - Teaches some very useful content, and I'm quite interested in this area. The second assignment on writing a CUDA circle rasterizer was pretty cool.
    - However, I don't think the class was run very well this semester - the other projects were a bit lackluster (and easy) and the course staff weren't very attentive.
    - Spent more time on architecture (cache coherency, interconnections, heterogeneity) than I would have preferred, but those parts were still reasonably interesting. I preferred the parts on parallel programming models, ILP, GPUs, synchronization, lock free code, etc. 
    - CUDA, OpenMP, ISPC, MPI, and various DSLs are cool, but I think I will stick with my raw C++/SIMD intrinsics/Vulkan. :p
    - I recommend this class for people who want to take only one systems elective, as understanding how to achieve high performance through parallelism is quite broadly useful. As a part of the systems concentration, I think it's still useful but not vital. OS covers low-level concurrent programming in far more depth. 
- 15-464: Technical Animation
    - Very cool content. Lectures mostly trace the history of research in animation.
    - Occasionally a bit boring, but I learned a lot more about simulation, which was the main reason I took the class.
    - Work is primarily two small projects and a final project, which all provide good opportunities to explore topics of interest. I implemented various IK algorithms for the first, mass-spring cloth for the second, and position based fluid simulation/rendering for the final. I added each of these to Scotty3D, so I'm planning on merging them into the main codebase as additional animation tasks.
    - Students write a [lecture blog](https://github.com/TheNumbat/15464-s21).
- 15-468: Physics-Based Rendering
    - Quite enjoyed this class and learned a lot after the first 1/3rd, which was mostly 462 review. Ioannis (Yannis) is a good lecturer and does really cool research. 
    - Programming assignments were too short, but some more advanced ones will be added next time >:)
    - Homework effectively emphasized fully understanding the mathematical underpinnings.
    - Reading groups (optional) were quite interesting and gave a window into contemporary rendering research.
    - Final project was a good opportunity to explore a particularly interesting advanced topic. I implemented a real-time RTX path tracer, which turned out to be super cool. I'd like to do more projects, though! I also enjoyed BDPT, (PSS) (M)MLT, specular NEE, volumetric/spectral/polarized/time of flight rendering, and differentiable rendering.
    - This was the first time a rendering class has been offered at CMU in over 15 years, so it wasn't fully polished, but I thought it was run well.
- 33-120: Science and Science Fiction
    - Similar to experimental physics (same professor).
    - Easy and occasionally fun. I like sci-fi.

**Other:** geometry collective/graphics lab meetings. A period of severe personal issues (resolved).

**Workload:** light for the first 2/3rds, heavy for the last 1/3rd - all four technical classes have big final projects

**Notes:** I finally got to take classes purely in my area(s) of interest, so I enjoyed this semester more than others. I overdid it a bit with four (actually three) final projects at once (plus TAing, again)&mdash;I wasn't able to focus on each enough to do the best project ever. But, I still did well and am reasonably happy with the results. This summer I'll be writing some blog posts covering the interesting parts of fluid sim / RTX path tracing / Vulkan and BVHs. Also got extremely good TA feedback again.

## Fall 2020
- TA: 15-462 - Computer Graphics
    - Put new codebase into production. Created extra work for myself fixing bugs and such, but went quite well overall. Students produced some _way_ cooler results with the new framework!
    - Otherwise same thoughts on TAing as last semester.
- 15-300: Research and Innovation in Computer Science
    - Learning more about my area of research (graphics and geometry processing) was great!
    - Basically a gen ed class (fulfils technical writing requirement), so was a drag at times.
    - Set up research project with geometry collective for next semester.
    - Wrote/presented some pretty good technical write-ups.
- ☆ 15-411: Compiler Design
    - The other infamous (workload) systems class. My experience isn't particularly representative, but I found it _far_ easier and less stressful than OS. Unlike OS, you're given thousands of test cases, and if your compiler passes all of them, it gets 100%. No more combing through code for concurrency mistakes for days on end.
    - Interesting content, although the lectures tended to be more abstract and advanced than was required to implement the projects. 
    - Projects require building up a decent sized codebase (ours is ~7k lines) of your own code over the semester, which is good for learning to technically manage a significant project. You pick the language - I learned Rust for this class, which turned out to be interesting and useful.
    - As with OS, you need to be able to work well with your partner. 
- 15-451: Algorithm Design and Analysis
    - I wish I could say this was a great extension of 15-210/15-251, but it really wasn't. Some of the topics were interesting to me, such as computational geometry, but others were either review or too theoretical to fully understand without dedicating more time than they were worth to me.
    - The professors (Miller/Sutner) were a bit out of touch, as they typically teach grad theory classes and CDM, respectively.
    - Had some programming homeworks in the style of competitive programming, which were pretty cool problems.
    - Class midterm average - 50% (lol). Substantial curve at the end.
- 21-355: Principles of Real Analysis I
    - Was less interesting than I had hoped, but still useful for formalizing my thinking about basic continuous math. Also serves as a pre-requisite for all upper-level continuous math courses.
    - Not too much work in of itself, but it pushed my workload from being often stressful to being basically always stressful, so I kind of regret taking it. I was originally taking it to complete the math minor, but I've now decided to do the new graphics concentration instead of the minor.
- 60-125: Introduction to 3D Animation
    - Very cool class and pretty fun! You learn each step of the 3D animation pipeline (mostly for film, but also games) by doing it yourself. You assemble everything you've built up over the semester into a final animation.
    - A surprising amount of work. Modelling is hard. Rigging is hard. Animation is hard. Everything is hard. I wish I had more time to dedicate to it in order to make more impressive final piece, but I still learned all the content.
    - Good to experience the art side of computer graphics.

**Other:** Started working with the [Geometry Collective](http://geometry.cs.cmu.edu/).

**Workload:** mostly death

**Notes:** much harder to stay motivated with online classes this semester. I probably shouldn't have taken this many classes, plus TAing, but I did end up doing well in all of them. Got extremely good TA feedback. Did many things last minute or late in the latter half of the semester.

## Summer 2020
- Apple: GPU Software Intern
    - Reasonably interesting and worked with some cool people, but overall was a bit boring and not a ton of work.
    - Was fully remote, so I didn't get to meet people in person or go to Apple HQ.
    - Got to present my intern project to SVP of software Craig Federighi.
    - Learned more about Metal, a pretty cool API (similar to Vulkan, but a bit less crufty) with great shader development/debugging tools.

## Spring 2020
- ☆ TA: 15-462 - Computer Graphics
    - See bottom; general advice regarding TAing (TLDR: would recommend).
    - Working with students at OH can be fun, although it can be very hard to pinpoint issues in their code.
    - Over winter break I started working on re-writing the course codebase to be much cleaner, faster, and less confusing. I hope to deploy it fall 2020. Support for this project has been very encouraging, and being able to have this much influence over the course is surprising.
- ☆ 15-259: Probability and Computing
    - Very well run, in-depth, and fast-paced. Highly recommended over the other probability options unless you want pure math, in which case you should take 21-325 or a measure theory course.
    - Includes CS applications of probability such as randomized algorithms, performance modeling, and Markov chains, which are all relevant to many areas of CS.
    - Mor is great. She is experienced, enthusiastic, and cares about student success.
    - Moderate workload: one problem set every week. Exams are pretty easy.
- ☆ 15-410: Operating System Design and Implementation
    - Infamous for being the highest straight workload class in CS. It really is a ton of work, but not _quite_ as much as people say.
    - The staff will not make design decisions for you or debug your code&mdash;you must learn to design, test, evaluate, and debug a substantial low-level project, from scratch, yourself.
    - Much of the work is debugging&mdash;if you're not yet an effective debugger, this course will make you one.
    - You need to be able to work well with your partner. Group work issues are common.
    - The midterm/final were difficult and stressful, and I don't think they should exist. The grading scheme is very opaque...the final gave me the lowest grade I've ever gotten, but somehow I still got an A in the class.
- ☆ 15-458: Discrete Differential Geometry
    - More of a math class than a CS class, but the CS portion (implementing results &amp; algorithms on real meshes) makes results tangible and very rewarding.
    - Probably my favorite math class ever, highly recommended if you are into geometry at all.
    - Keenan is great - in this class especially, his slides, diagrams, and animations are very elegant. They're used to teach this content all over the world.
    - Light workload: one moderate problem set + one short programming assignment every 2 weeks. [2021 update: apparently the problem sets are a lot more work now.]

**Workload:** moderate to heavy depending on when an OS project was due.

**Notes:** everything this semester has a star&mdash;all are recommended. Coronavirus arriving midway through the semester made everything go a bit crazy, but PnC &amp; DDG finished more or less normally, and, while OS changes were mostly bungled (the majority of our course grade was unknown after the final grading deadline...), kernels got completed and end-of-semester work was somewhat reduced. I didn't really feel that OS deserved its reputation as _the_ systems class to take, as I found a good portion of its difficulty to be incidental and not contribute to learning. Even so, OS will still teach you a lot about low level design, debugging, and _especially_ concurrency, so it's worth taking if you want a systems concentration. Otherwise, eh...there are probably better uses of your time. Also note that OS is not recommended as a first systems elective&mdash;especially as a sophomore&mdash;and I'd agree with that unless one found 15-213 easy.

## Fall 2019
- 15-210: Parallel and Sequential Data Structures and Algorithms
    - Algorithms are cool, and you do a lot of problem solving with them. Another solid cs theory class, but not as special as 15-251. 
    - Also taught in a functional language; also not super hard if you grok the functional style.
    - I felt like there was less emphasis on parallelism than the name might suggest - this just meant that you analyze the span as well as the work of each algorithm.
- 15-213: Introduction to Computer Systems
    - Gigantic class and hence hard to run efficiently, but covers essential systems topics very well. Should probably be taken by anyone going into software engineering, even if not systems-oriented.
    - I was already familiar with most of the topics (as well as programming projects in c from scratch), so it didn't take me much time.
- ☆ 15-462: Computer Graphics
    - Deep but accessible lectures, rewarding and complex projects. Good introduction to many sub-fields within graphics.
    - Unfortunately almost totally lacks real-time graphics.
    - The codebase _used_ to be a mess, but I have fixed this :)
    - Keenan is great. Nancy is also cool, but tends to give less engaging lectures.
- 15-295: Competition Programming and Problem Solving
    - Basically a club rather than a class (3 hours a week).
    - Doesn't teach much content - you just solve problems.
    - I didn't have any experience and wasn't extraordinarily good at it, but with a 15-210 level of algorithms knowledge I was able to do enough problems for an A without putting in much time outside of class.
- 33-104: Experimental Physics
    - Chill class, but morning lecture was unfortunate.
    - Teaches laboratory skills but the physics is quite basic.
    - Minimal work outside of class.

**Workload:** moderate to heavy depending on how many due dates coincided

**Notes:** The freshman advisor wouldn't let me register for graphics without the pre-requisite (15-213), even with instructor permission, but I got into it anyway by talking to the assistant dean (Tom). Moving into an apartment was great.

## Summer 2019
- NVIDIA: 3D Graphics Software Intern
    - I talked to their recruiters at one of the career fairs, but I don't think that turned into anything. I just applied online and interviewed for the position.
    - This was the only internship offer I received, which was unusual because NVIDIA mostly hires juniors and sophomores.
    - The position turned out to be kind of boring for me; I got to work on some interesting GPU performance metrics, but it alternated between being too much high level build-service-benchmark-gluing and too much low level hardware stuff, as opposed to working on actual graphics software.
    - Two particularly memorable parts were touring their silicon failure analysis lab and visiting the house of Jensen Huang.

## Spring 2019
- 15-150: Principles of Functional Programming
    - I think everyone should have to take at least one class in a functional language, and this is a great introduction.
    - Not super hard if you grok the functional style.
    - The grading was pedantic and often wrong.
- ☆ 15-251: Great Theoretical Ideas in Computer Science
    - Very interesting overview of many topics in cs theory. Enough depth to legitimately understand and apply the topics to other areas, but not so much as to make you hate the less interesting parts.
    - I didn't like the weekly homework writing session; it felt like a test every week. I would have preferred to have time to write-up the problems more formally, which I didn't do for about half the weeks.
    - Past the solo problems, the homeworks were usually very difficult.
    - You need to find a good group. 
- 21-268: Multidimensional Calculus
    - Objectively a good class, but early morning and pretty boring lecture.
    - It was a more rigorous treatment than what I knew, but I should have taken 21-269 (Vector Analysis).
- 80-135: Introduction to Political Philosophy
    - Highly recommended if it fulfils a gen-ed requirement you need.
    - A lot of reading but light writing.
    - Gray is very interesting and engaging.
- 80-150: Nature of Reason
    - Pretty useless, don't take this. Minimal work, though.

**Workload:** probably moderate, but often felt heavy due to living situation stress &amp; not sleeping enough

**Notes:** I really hated living in a dorm...

## Fall 2018
- 15-122: Principles of Imperative Computation
    - An important class to take, but was not useful for me. Should have skipped.
    - Practices like defensive programming with contracts and invariants are valuable for all future coding.
- ☆ 15-151: Mathematical Foundations of Computer Science
    - Very good class, well-run and Mackey is a great lecturer/leader.
    - Necessary and sufficient preparation for cs theory, algorithms, and proof-based math.
    - Pretty straightforward if you have competitive math background (I didn't, but had taken a CS math/logic class, so it wasn't too bad). Difficult otherwise.
- 21-241: Matrices and Linear Transformations
    - This semester had a SCS specific section that included short programming assignments implementing lin alg results in Python. I don't think this added much.
    - Also had some applied topics like SVD and a final project on spectral clustering, which was interesting and new.
    - Overall should have taken 21-242 (Matrix Theory).
- 76-102: Gothic Literature
    - Pretty standard lit class. Topics vary per semester.
    - Good alternative to 76-101 if you enjoy reading & discussion.
- 85-102: Introduction to Psychology
    - Secretly the hardest class at CMU. Minimal work, though.

**Workload:** light

**Notes:** I'm still mad that I didn't get transfer credit for 21-241, 21-259, or 15-122...I really did not need to re-take these. Thanks, Jacobo. I also regret not taking the honors freshman math track, which is 21-242 and 21-269. I wasn't selected for 21-242 based on the freshman math maturity survey, but I am pretty sure I could have handled it. In a perfect world, I probably would have taken 15-150, 15-151, 21-242 first semester and 15-213, 15-251, 21-269 second semester (although that might have been a deathly workload).

## Advice for Freshmen
- Doing research freshman year isn't a great idea - you can't do that much without completing the CS core, even if a professor gives you a real project. First year, I would instead recommend focusing on doing excellently in/doing more of the core. Over the following summer, however, getting into research is a great idea if you don't want/get an internship. (FYI - freshman internships are unusual.)
- Many people recommend taking fewer classes to make time for other cool things, so I'll reiterate that, especially if you want to do research. However, to get into these 'other things,' I would also encourage trying to stand out in classes whose content you are particularly interested in, doing projects, becoming a TA, or any other activities that build a relationship with faculty, even if it means putting in a little less effort in other areas. [This great presentation](http://graphics.stanford.edu/~kayvonf/misc/do_grades_matter.pdf) goes into what I'm talking about here.
- TAing is a rewarding experience: you will deepen your understanding of your subject, teach others about what you enjoy, and can even affect course development by designing assignments and tests, etc. I will note that the latter is more difficult to do in core courses, which tend to be larger and more set in stone. You also get paid peanuts.
- Don't expect transfer credit for other university courses...
