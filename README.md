# 🧮 Scientific Calculator (C++)

A lightweight, menu-driven scientific calculator built in C++ using the standard library — no external dependencies.

---

## ✨ Features

- Basic arithmetic — addition, subtraction, multiplication, division
- Power and square root
- Trigonometric functions — sin, cos, tan (input in degrees)
- Exponential (`e^x`) and logarithmic functions (`ln x`, `log10 x`)
- Factorial (`n!`)
- Absolute value
- Percentage calculation
- Input validation — handles division by zero, invalid logarithms, negative inputs
- Continuous execution loop until exit

---

## 📌 Supported Operations

| # | Operation | Input |
|---|-----------|-------|
| 1 | Addition (`a + b`) | Two numbers |
| 2 | Subtraction (`a - b`) | Two numbers |
| 3 | Multiplication (`a × b`) | Two numbers |
| 4 | Division (`a / b`) | Two numbers |
| 5 | Power (`a ^ b`) | Base and exponent |
| 6 | Square Root (`√a`) | One number (≥ 0) |
| 7 | Sine (degrees) | Angle in degrees |
| 8 | Cosine (degrees) | Angle in degrees |
| 9 | Tangent (degrees) | Angle in degrees |
| 10 | Exponential (`e^x`) | One number |
| 11 | Natural Log (`ln x`) | One number (> 0) |
| 12 | Factorial (`n!`) | Non-negative integer |
| 13 | Absolute Value | One number |
| 14 | Log Base 10 (`log10 x`) | One number (> 0) |
| 15 | Percentage (`a/b × 100`) | Obtained & Total |
| 16 | Exit | — |

---

## ⚙️ Build & Run

### Linux / macOS
```bash
g++ -o calculator calculator.cpp -lm
./calculator


📁 Project Structure
.
├── calculator.cpp   # Main source code
└── README.md        # Project documentation


🚀 Future Improvements
History of calculations
Memory functions (M+, M-, MR)
GUI version (Qt / SFML)
Expression parser (e.g., 2+3*5)
Complex number support
Dark/Light terminal themes
