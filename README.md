# std::vector<bool> Gotchas: Performance and Iterator Issues

This repository demonstrates the common pitfalls associated with using `std::vector<bool>` in C++.  `std::vector<bool>` is notorious for its non-standard behavior, often leading to performance problems and iterator-related complications.

**The Problem:**

`std::vector<bool>`'s space optimization (packing multiple bools into a single byte) comes with a trade-off:  accessing individual elements becomes significantly slower and less predictable than with other vector types. Further, its iterators don't fully conform to standard iterator requirements. 

**The Solution:**

Prefer using `std::vector<char>` or `std::vector<uint8_t>` when space is less of a concern than performance and standard iterator compatibility.  If space optimization is absolutely critical, carefully consider the performance implications and make sure you fully understand the potential complications.

**How to use this repository:**

1. Clone this repository
2. Compile and run the example code.
3. Observe the performance difference between `std::vector<bool>` and alternative solutions.