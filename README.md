A lightweight, robust Command Line Interface (CLI) application built in C++ to manage product inventory. This project demonstrates core Object-Oriented Programming (OOP) principles, memory-safe data handling, and modern data serialization.

## Features
Stateful Execution: Utilizes an infinite application loop for continuous user interaction.
Smart Data Entry: Safely handles strings with spaces and prevents duplicate IDs from being entered into the system.
Persistent Storage: Automatically saves and loads inventory data using modern JSON formatting, replacing fragile CSV text parsing.
Memory Optimization: Built using the Standard Template Library (`std::vector`) with optimized `emplace_back` and `std::move` operations to minimize unnecessary memory copying.
Encapsulated Architecture: Strict separation of interface (`.h`) and implementation (`.cpp`) with `const`-correct getter methods to protect underlying data.

##  Technologies & Tools
* **Language:** C++14
* **Build System:** CMake
* **External Libraries:** [nlohmann/json](https://github.com/nlohmann/json) (Single-header JSON library for C++)
* **Environment:** CLion / Windows 11
