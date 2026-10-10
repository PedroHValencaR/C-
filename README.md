# C++ Learning & Practice

[![LinkedIn Post on Push](https://github.com/PedroHValencaR/C-/actions/workflows/linkedin-post.yml/badge.svg)](https://github.com/PedroHValencaR/C-/actions/workflows/linkedin-post.yml)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)

Welcome to my C++ practice and study repository! This space is dedicated to my journey of learning and applying foundational to advanced computer science and software engineering concepts using C++.

---

## 📁 Repository Structure

The project is structured according to clean architecture and modern development standards:

```text
.
├── .github/
│   └── workflows/          # CI/CD and automation workflows (LinkedIn sync)
├── src/
│   ├── basics/             # Fundamental syntax, operators, logic and control flow
│   └── projects/           # Mini-projects and combined implementations
├── .gitignore              # Ignores build artifacts, object files, and binaries
└── README.md               # Repository documentation and guides
```

---

## 📚 Contents Overview

### 🔹 `src/basics/` (Foundations)
Focused on core language mechanics and algorithm fundamentals:
* **`age.cpp`**: Variables, primitive types, standard I/O streams (`std::cin`, `std::cout`).
* **`and_or.cpp`**: Boolean algebra and conditional evaluation (`&&`, `||`).
* **`bool_light_control.cpp`**: State toggling logic using booleans and loops.
* **`factorial.cpp`**: Recursion and mathematical algorithms.
* **`sum_substration_multiplication.cpp`**: Arithmetic operators and basic arithmetic computation.
* **`switch_(case).cpp`**: Control flow using `switch-case` branches.
* **`temperature.cpp`**: Unit conversion logic and float handling.

### 🔹 `src/projects/` (Practical Implementations)
Practical mini-projects applying structured programming concepts:
* **`books.cpp`**: Mini console application modeling book storage/records.
* **`project_3.cpp`** & **`project_4.cpp`**: Logic challenges and combined problem-solving scripts.

---

## 🛠️ How to Compile and Run

To compile any program locally, use a C++ compiler supporting modern standards (GCC, Clang, or MSVC):

### Linux / macOS
```bash
# Compile
g++ src/basics/factorial.cpp -o bin/factorial

# Run
./bin/factorial
```

### Windows (PowerShell / CMD)
```powershell
# Compile
g++ src/basics/factorial.cpp -o factorial.exe

# Run
.\factorial.exe
```

---

## 🚀 Automation & CI/CD
* Every push to `main` triggers a GitHub Actions workflow that automatically publishes updates and commits directly to [LinkedIn](https://www.linkedin.com/).
