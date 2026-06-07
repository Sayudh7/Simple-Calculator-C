# 🧮 Scientific Calculator (C++)

A lightweight, menu-driven scientific calculator built in C++ using the standard library — no external dependencies.

---

## Features

- Basic arithmetic — addition, subtraction, multiplication, division
- Power and square root
- Trigonometric functions — sin, cos, tan (input in degrees)
- Exponential (`e^x`) and natural logarithm (`ln x`)
- Input validation — catches division by zero, negative square roots, and invalid log inputs
- Continuous loop — keeps running until you choose to exit

---

## Supported Operations

| # | Operation | Input |
|---|-----------|-------|
| 1 | Addition (`a + b`) | Two numbers |
| 2 | Subtraction (`a - b`) | Two numbers |
| 3 | Multiplication (`a × b`) | Two numbers |
| 4 | Division (`a / b`) | Two numbers |
| 5 | Power (`a ^ b`) | Base and exponent |
| 6 | Square Root (`√a`) | One number (≥ 0) |
| 7 | Sine — degrees | Angle in degrees |
| 8 | Cosine — degrees | Angle in degrees |
| 9 | Tangent — degrees | Angle in degrees |
| 10 | Exponential (`e^x`) | One number |
| 11 | Natural Log (`ln x`) | One number (> 0) |
| 12 | Exit | — |

---

## Build & Run

### Linux / macOS

```bash
g++ -o calculator calculator.cpp -lm
./calculator
```

### Windows (MinGW)

```bash
g++ -o calculator.exe calculator.cpp
calculator.exe
```

### Windows (MSVC)

```bash
cl calculator.cpp
calculator.exe
```

> Requires C++11 or later. Use `-std=c++11` if your compiler defaults to an older standard.

---

## Example Session

```
===== SCIENTIFIC CALCULATOR =====
1. Addition
...
Enter your choice: 7
Enter angle (degrees): 90
Result = 1
```

---

## Project Structure

```
.
├── calculator.cpp   # Main source file
└── README.md
```

---

