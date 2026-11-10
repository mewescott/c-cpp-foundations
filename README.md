# C & C++ Foundations — My Road to ROS

This repository records my C and C++ study before beginning a deeper training journey in **ROS (Robot Operating System)**. It preserves book exercises, small experiments, and alternate attempts as a snapshot of the foundations I worked through along the way.

This is a **learning archive**, not a single application or a production-ready library. Some examples are adaptations of book material; others are exercise solutions or experiments. They should not all be read as original projects written from scratch.

## Learning path

1. **Language fundamentals:** variables, arithmetic, input/output, branching, loops, and functions.
2. **C-style programming:** arrays, pointers, pointer arithmetic, structs, function pointers, storage duration, and small stack implementations.
3. **C++ foundations:** streams, strings, vectors, references, headers, and separate compilation.
4. **Next step — ROS:** build on these foundations while studying robotics software, nodes, messages, packages, and larger C++ codebases. ROS projects are not included in this archive.

## Repository guide

| Location | Contents |
| --- | --- |
| Root-level exercises | Short introductory C++ exercises. |
| [Thinking in C](Thinking%20in%20C%20/) | C fundamentals and experiments, mostly stored as C++ source files. |
| [Thinking in C++](Thinking%20in%20C%20++/) | C++ stream, string, vector, and command-line exercises. |
| [Chapter 3](Thinking%20in%20C%20++/Chapter%203/) | Further language exercises, including multi-file programs and bit-level operations. |

Original folder names are retained, including spaces and the trailing space in the C study folder. Quote paths when using a terminal. Alternate versions and copied attempts are intentionally preserved to show the learning process.

## Build selected exercises

Requirements: Linux (or a comparable development environment) and a C++ compiler. These examples use **GCC with GNU C++17**, matching the local study environment.

Run the following from the repository root for a simple standalone exercise:

```bash
mkdir -p build
g++ -std=gnu++17 -Wall -Wextra exercise1.cpp -o build/exercise1
printf '3\n' | ./build/exercise1
```

An example of separate compilation with a header and two source files:

```bash
g++ -std=gnu++17 -Wall -Wextra \
  "Thinking in C ++/Chapter 3/Ex3_1_main.cpp" \
  "Thinking in C ++/Chapter 3/Ex3_1_function.cpp" \
  -o build/ex3_1
./build/ex3_1
```

Build exercises individually; many define their own `main()` and cannot be linked into one executable. Some need companion source files, command-line arguments, interactive input, or a particular working directory for sample input files.

## Scope and caveats

- These are historical study exercises, not a claim that every example is complete or correct.
- Some examples intentionally explore unsafe operations, low-level behavior, or mistakes. Review unfamiliar code before running it.
- The archive is not comprehensively tested. Successful builds of selected examples do not validate every exercise.
- Generated executables, object files, build output, and machine-local VS Code configuration are excluded from version control. The ignore rules allow source, text inputs, and Markdown documentation; extend them when adding other intentional file types.

## Study references and attribution

The study folders refer to **Thinking in C** and **Thinking in C++** learning materials. *Thinking in C++* is by **Bruce Eckel**. Source comments, exercise descriptions, and original book-style file markers are retained where present.

Book-derived examples and exercise wording remain attributable to their respective authors and rights holders. This repository documents my study and adaptations; it does not claim ownership of the underlying teaching material or grant a new license over it. No repository-wide license is applied.