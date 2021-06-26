---
layout: page
title: CMU Course Opinions
permalink: /cmu/
---

Inspired by [these](https://wanshenl.me/courses/reviews/) [pages](http://weihang7.github.io/guides/2019/12/19/scs-guide.html), this includes thoughts on my path through CMU SCS.

**Degree:** BS in computer science with concentrations in computer graphics and computer systems. I am applying to PhD programs in graphics. I also like algorithms and programming languages, but don't focus on them.

**Pre-CMU:** I entered CMU with an extensive programming background in systems and some real-time graphics, as well as a decent undergrad-level math background. I didn't have any competitive math/programming experience. 

**☆**: courses which I thought were worth attending CMU for. Courses without a star are still worthwhile unless stated otherwise, but one could find similar content/experiences at other universities.

## Fall 2021 
- 11-485: Introduction to Deep Learning
- 10-414: Deep Learning Systems: Algorithms and Implementation
- 17-363: Programming Language Pragmatics
- 15-591: Independent Study Research
- 79-395: The Arts in Pittsburgh

**Other:** PhD applications.

**Workload:** TBD

**Notes:** TBD

## Summer 2021
- Jane Street: SWE Intern
    - Not graphics, but interesting on the systems programming side.
    - OCaml
    - \$\$\$\$

## Spring 2021
- TA: 15-462 - Computer Graphics
    - Was a bit less interesting this time since no big changes were introduced. Will probably not TA again in order to free up more time for research work.
    - This was the second semester we ran a course discord server, and it was quite helpful for facilitating student interactions and getting people to help each other. It produced several enthusiastic students who will be new TAs and/or Scotty3D contributors.
    - Overall, my previous thoughts on TAing still apply.
- 15-400: Research Practicum in Computer Science
    - I implemented various strategies for computing closest point queries, analyzing their performance on both the CPU and GPU. I found some interesting results that diverged from previous work on high performance ray tracing, but overall there is no panacea for closest points.
    - I worked with Rohan Sawhney &amp; Keenan Crane of the CMU Geometry Collective. All of the GC PhD students are generally very knowledgeable and fun to talk or listen to. 
    - I struggled to find time/motivation for this project during the first half of the semester, but was able to focus more during the second. Combining the latter part (GPU analysis) with my 15-418 final project helped make time.
- 15-418: Parallel Computer Architecture and Programming
    - Teaches a lot of interesting and useful content. The second assignment on writing a CUDA circle rasterizer was pretty cool.
    - I don't think the class was run very well this semester - the other projects were a bit easy/lackluster and the course staff weren't very attentive.
    - The syllabus spent more time on architecture (e.g. cache coherency, interconnections, heterogeneity) than I would have preferred, but those parts were still reasonably interesting. I enjoyed the parts on parallel programming models, ILP, GPUs, synchronization, lock free code, etc. 
    - I would recommend the class to people who want to take exactly one systems elective, as understanding how to achieve high performance through parallelism is broadly useful. I think it's also a good topic as a part of the systems concentration, but not vital, as the content could be learned on-demand. 15-410 covers low-level concurrency in far more depth. 
- 15-464: Technical Animation
    - Very cool content. The lectures trace the history of research in animation (some were a bit boring, though).
    - I learned a lot about simulation, which was the main reason I took the class.
    - Assignments include two small projects and a final project, all of which provide opportunities to explore topics of interest. I implemented various inverse kinematic algorithms for the first, mass-spring cloth for the second, and position based fluid simulation &amp; rendering for the final. I added each of these features to Scotty3D.
    - Students write a [lecture blog](https://thenumbat.github.io/15464-s21/).
- 15-468: Physics-Based Rendering
    - I quite enjoyed this class and learned a lot after the first 1/3rd (which was mostly 462 review). 
    - Ioannis (Yannis) is a good lecturer and does really cool research. 
    - Programming assignments were too short, but some more advanced ones will be added in later years.
    - Homework effectively emphasized fully understanding each topic's mathematical underpinnings.
    - The reading group was quite interesting and gave a window into contemporary rendering research.
    - The final project was a good opportunity to explore an interesting advanced topic. I implemented a real-time RTX path tracer, which produced some great results. I'd like to do more projects in this area - BDPT, (PSS) (M)MLT, specular NEE, volumetric/spectral/polarized/time of flight rendering, and differentiable rendering were all intriguing.
    - This was the first time a rendering class has been offered at CMU in over 15 years, so it wasn't fully polished, but I thought it was run well.
- 33-120: Science and Science Fiction
    - Similar to experimental physics, since I had same professor for both courses.
    - Easy and occasionally fun. I enjoy sci-fi.

**Other:** geometry collective/graphics lab meetings. A period of severe personal issues (resolved).

**Workload:** light for the first 2/3rds, heavy for the last 1/3rd - all four 15- classes had final projects.

**Notes:** I finally got to take classes purely in my area(s) of interest, so I enjoyed this semester more than others. Doing 3.5 final projects at once (plus TAing) was a bit much&mdash;I wasn't able to focus on each enough to produce super amazing results. But, I still did well and am pretty happy with the results. I'll be writing some blog posts covering the interesting parts of fluid sim / RTX path tracing / Vulkan and BVHs. I also got extremely good TA feedback again.

## Fall 2020
- TA: 15-462 - Computer Graphics
    - Put new codebase into production. This created extra work for myself in fixing bugs, but it went quite well overall. Students produced some _way_ cooler results with the new framework!
    - Otherwise same thoughts on TAing as last semester.
- 15-300: Research and Innovation in Computer Science
    - Learning more about my area of research (graphics and geometry processing) was great!
    - More of a gen-ed class (it fulfils the technical writing requirement), and some parts were boring.
    - Set up a research project with the Geometry Collective for next semester.
    - Wrote and presented some pretty good technical write-ups.
- ☆ 15-411: Compiler Design
    - Compilers is the other infamous-workload systems class. My experience is maybe not representative, but I found it _far_ easier and less stressful than OS. Unlike OS, you're given thousands of test cases, and if your compiler passes all of them, it gets full credit. No more combing through code for concurrency mistakes for days on end.
    - Interesting content, although the lectures tended to be more abstract and advanced than was required to implement the projects. 
    - Projects require building up a decent sized codebase from scratch over the semester, which is good for learning to technically manage a significant project. You can choose your implementation language: I learned Rust for this class, which turned out to be interesting and useful.
    - As with OS, you need to be able to work well with your partner. 
- 15-451: Algorithm Design and Analysis
    - I wish I could say this was a great extension of 15-210/15-251, but it really wasn't. Some of the topics were interesting to me (e.g. computational geometry), but others were either review from previous courses or not relevant to my interests.
    - The professors (Gary Miller + Klaus Sutner) were a bit out of touch, as they typically teach grad-level classes.
    - Had some programming homeworks in the style of competitive programming, which were cool problems.
    - Class midterm average - 50% (lol). Substantial curve at the end.
- 21-355: Principles of Real Analysis I
    - Was less interesting than I had hoped, but still useful for formalizing my thinking about basic continuous math. The course serves as a pre-requisite for all upper-level continuous math courses.
    - Not too much work in of itself, but it pushed my workload from being often stressful to being basically always stressful, so I kind of regret taking it. I was originally taking it to complete the math minor, but I've now decided to do the new graphics concentration instead.
- 60-125: Introduction to 3D Animation
    - Cool class and pretty fun! You learn each step of the 3D animation pipeline (mostly for film, but also games) by doing it yourself. You assemble everything you've built up over the semester into a final animation.
    - A surprising amount of work&mdash;every step is quite involved. I wish I had more time available to work on the final piece, but I still learned all the content.
    - Good to experience the art side of computer graphics.

**Other:** Started working with the [Geometry Collective](http://geometry.cs.cmu.edu/).

**Workload:** too much 

**Notes:** It was much harder to stay motivated in online classes outside of my preferred areas&mdash;did many things last minute or late in the latter half of the semester. I probably should have taken fewer classes, but I did end up doing well in all of them. I also got extremely good TA feedback. 

## Summer 2020
- Apple: GPU Software Intern
    - Reasonably interesting and worked with some cool people, but overall was a bit boring and not a ton of work.
    - Was fully remote, so I didn't get to meet people in person or go to Apple HQ.
    - Got to present my intern project to SVP of software Craig Federighi.
    - Learned more about Metal, a pretty cool API (similar to Vulkan, but a bit less crufty) with great shader development/debugging tools.

## Spring 2020
- ☆ TA: 15-462 - Computer Graphics
    - See general advice regarding TAing below (recommended).
    - Working with students at office hours is often fun, though debugging their code can be difficult.
    - Over the 2019 winter break, I started working on re-writing the course codebase to be much faster, cleaner, and less confusing. I hope to deploy it fall 2020 (now deployed!). Support for the project was very encouraging, although I did not really receive any guidance. Being able to have that much influence over the course on my own was surprising&mdash;it's not the norm for larger core courses with more formalized processes. 
- ☆ 15-259: Probability and Computing
    - Very well run, in-depth, and fast-paced. For CS majors, I highly recommend it over the other probability options.
    - Includes CS applications of probability such as randomized algorithms, performance modeling, and Markov chains, which are all relevant to many areas of CS.
    - Mor is great. She is experienced, enthusiastic, and cares about student success.
    - Moderate workload: one problem set every week. Exams are pretty easy.
- ☆ 15-410: Operating System Design and Implementation
    - Infamous for being the highest workload class in CS. It really is a **lot** of work, but people do exaggerate somewhat.
    - The staff will not make design decisions for you or debug your code&mdash;you must learn to design, test, evaluate, and debug a complex low-level project, from scratch, yourself.
    - Much of the work is debugging&mdash;if you're not yet an effective debugger, this course will make you one.
    - The midterm/final were difficult and stressful, and I don't think they should have existed. The grading scheme was also very opaque...
    - You need to be able to work well with your partner. Group work issues are common.
- ☆ 15-458: Discrete Differential Geometry
    - More of a math class than a CS class, but the applications (implementing algorithms on real meshes) made results tangible and very rewarding.
    - Overall my favorite math class ever&mdash;I highly recommend it if you have any interest in geometry.
    - Keenan is great - in this class especially, his slides, diagrams, and animations are very elegant. They're used to teach this content all over the world.
    - Light workload: one moderate problem set + one short programming assignment every 2 weeks. [2021 update: apparently the problem sets are a lot more work now.]

**Workload:** moderate to heavy depending on when an OS project was due.

**Notes:** everything this semester has a star&mdash;all are recommended. Coronavirus arriving midway through the semester caused much turmoil, but PnC &amp; DDG finished more or less normally. While OS changes were mostly bungled&mdash;the majority of our course grade was unknown after the final grading deadline&mdash;kernels got completed and end-of-semester work was somewhat reduced. After taking it, I didn't feel that OS deserved its reputation as _the_ systems class to take, as I found a good portion of its difficulty to be incidental and not really contribute to learning (although I may also be biased from a poor group work experience). Even so, OS does teach one a lot about low level design, debugging, and _especially_ concurrency, so it's worth taking if you want a systems concentration. Otherwise, eh...there are likely better uses of your time. Finally, note that OS is not recommended as a first systems elective&mdash;especially as a sophomore&mdash;and I'd agree with that unless one found 15-213 easy.

## Fall 2019
- 15-210: Parallel and Sequential Data Structures and Algorithms
    - Algorithms are cool, and you do a lot of problem solving with them. This class was another solid theory offering, but was not as special as 15-251. 
    - As with 15-150, the course is taught in SML, and is similarly not super difficult for those who grok the functional style.
    - There was less emphasis on parallelism than the name might suggest&mdash;this just meant that you analyze the span as well as the work of each algorithm.
- 15-213: Introduction to Computer Systems
    - Gigantic class and hence hard to run efficiently, but covers essential systems topics very well. Should be taken by anyone going into software engineering, even if not systems-oriented.
    - I was already familiar with most of the topics (as well as programming in C from scratch), so it didn't take up much time.
- ☆ 15-462: Computer Graphics
    - Deep but accessible lectures, rewarding and complex projects. Good introduction to many sub-fields within graphics.
    - Unfortunately almost totally lacks real-time graphics&mdash;the only project that hits on these topics is a software SVG rasterizer.
    - The codebase was a mess&mdash;but I have fixed this.
    - Keenan Crane is excellent. Nancy Pollard is also great, but tends to give less engaging lectures.
- 15-295: Competition Programming and Problem Solving
    - Basically a club rather than a class (3 hours a week).
    - Doesn't teach much content - you just solve problems. [2021 update: there is now 15-195, which teaches more content.]
    - I didn't have any competitive programming experience (and wasn't extraordinarily good at it), but with a 15-210 level of algorithms knowledge I was able to get by without putting in much time outside of class.
- 33-104: Experimental Physics
    - Teaches laboratory skills, but the physics content is quite basic.
    - Minimal homework if you finish the lab tasks during class. 

**Workload:** moderate to heavy depending on how many due dates coincided

**Notes:** The freshman advisor wouldn't let me register for graphics without the pre-requisite (15-213), even with instructor permission, but I got into it anyway by talking to Tom Cortina (the assistant dean). Moving into an off campus apartment made everything significantly better&mdash;from then on I always slept for 8-9 hours.

## Summer 2019
- NVIDIA: 3D Graphics Software Intern
    - I had originally spoken with NVIDIA's recruiters at one of the CMU career fairs, but I don't think that turned into anything. For this position, I just applied and interviewed online.
    - This was the only internship offer I received, which was unusual because NVIDIA mostly hires juniors and sophomores.
    - The actual job turned out to be rather boring for me: I got to work on some interesting GPU performance metrics, but it alternated between simple build-service-benchmark-plumbing and hardware work that I didn't have much experience with.
    - The most memorable parts were touring NVIDIA's silicon failure analysis lab and the annual intern event at the house of Jensen Huang.

## Spring 2019
- 15-150: Principles of Functional Programming
    - I think everyone should have to take at least one class in a functional language, and this was a great introduction.
    - Not super hard if you quickly grok functional reasoning.
    - Many assignments involved proofs for which grading was unnecessarily pedantic and occasionally incorrect.
- ☆ 15-251: Great Theoretical Ideas in Computer Science
    - Very interesting overview of many topics in CS theory. Enough depth to legitimately understand and apply the topics to other areas, but not so much as to make you hate the less interesting parts.
    - I didn't enjoy the weekly homework writing session: it felt like a test every week. I would have preferred the opportunity to write-up the problems on my own, which I didn't do for about half the weeks. However, I did find writing sessions far preferable to the more traditional exams.
    - Beyond the solo problems, the homeworks were usually very difficult. I have heard this semester was unusually hard, though.
    - The hard problems are meant to be worked on in groups&mdash;prioritize finding a good one. 
- 21-268: Multidimensional Calculus
    - This is a good class overall, but for me was early morning and pretty boring.
    - It gave a more rigorous treatment than what I already knew, but it was still too much review. I should have taken 21-269 (Vector Analysis).
- 80-135: Introduction to Political Philosophy
    - Highly recommended if it fulfils a gen-ed requirement you need.
    - A lot of (interesting) reading but light writing.
    - Derek Gray is engaging and enthusiastic. Philosophy TAs are also interesting.
- 80-150: Nature of Reason
    - Pretty useless, don't take this. Minimal work, though.

**Workload:** overall moderate, but was often increased due to my living situation cutting into sleep. 

**Notes:** I hated living in a dorm.

## Fall 2018
- 15-122: Principles of Imperative Computation
    - An important class to take, but was almost entirely review for me. Should have skipped.
    - Practices like defensive programming with contracts and invariants are valuable for all future coding.
- ☆ 15-151: Mathematical Foundations of Computer Science
    - Very well run: Mackey is a great lecturer/leader.
    - Necessary and sufficient preparation for CS theory, algorithms, and proof-based math.
    - Pretty straightforward if you have background in competitive math, but difficult otherwise. I never did competitive math, but had already taken a logic class, so it wasn't bad.
- 21-241: Matrices and Linear Transformations
    - This semester had a SCS specific section that included short programming assignments implementing results in Python. I don't think this added much.
    - Included some advanced(ish) topics, including SVD and a final project on spectral clustering. Those parts were interesting and new.
    - Overall was too much review for me: I should have taken 21-242 (Matrix Theory).
- 76-102: Gothic Literature
    - Pretty standard literature class. Topics vary depending on the professor and semester.
    - Good alternative to 76-101 if you enjoy reading & discussion.
- 85-102: Introduction to Psychology
    - Exam grading made it secretly the hardest class at CMU (consider my GPA...).
    - Minimal work outside of class, though.

**Workload:** light

**Notes:** I'm still angry that my freshman advisor denied transfer credit for 21-241, 21-259/268, and 15-122...I really did not need to re-take them. For 15-122 in particular, my course syllabi included all of the content, but my request was still denied due to one of the courses having been offered online (despite being a normal university course! Funny how their stance on online courses changed in 2020...). I also regret not taking the honors freshman math track (21-242/21-269). I wasn't selected for 21-242 based on the freshman math maturity survey, but I think I would have gotten a lot more out of it. In a perfect world, I probably would have taken 15-150, 15-151, and 21-242 first semester, 15-213, 15-210, and 21-269 second semester, and 15-251 + electives third semester.

## Some Advice for Freshmen
- Doing research freshman year isn't the best idea: even if a professor gives you a real project, your knowledge will be pretty limited until you're able to take CS electives. I would instead recommend focusing on doing excellently in/more of the core courses. Over the following summer, however, getting into research is a great idea if you don't want/get an internship, since freshman internships are unusual.
- Many people recommend taking fewer classes to make time for other cool things, so I'll reiterate that, especially if you are interested in research (but not implying that is the only other option). However, to get into these 'other things,' I would encourage trying to stand out in classes whose content you are particularly interested in, doing outside projects, becoming a TA, or any other activities that can build a relationship with faculty&mdash;even if it means putting in a little less effort in other areas. This [presentation](http://graphics.stanford.edu/~kayvonf/misc/do_grades_matter.pdf) from CMU (now Stanford) professor Kayvon Fatahalian describes this in more detail.
- TAing is a rewarding experience: you can deepen your understanding of your subject, teach others about what you enjoy, and can even personally influence course/curriculum development. I will note that the latter is more difficult to do in core courses, which tend to be larger and more set in stone. Unfortunately, you do not get paid very much&mdash;it's definitely not worth it monetarily, unless it gets you a job.
- Don't expect transfer credit for other university courses...
