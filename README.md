# Fixed Point vs Floating Point Numbers

Welcome DEV! This project aims to provide a clear and concise explanation of **Fixed Point** and **Floating Point** number representations, commonly used in computer systems, embedded programming, and numerical computing.

## 📘 What Are Number Representations?

In computing, not all numbers are stored as regular decimal values like we write on paper. Instead, numbers are stored in binary form using specific schemes that optimize for performance, precision, and memory usage. Two common representations are:

- **Fixed Point Numbers**
- **Floating Point Numbers**

---

## 🔢 Fixed Point Numbers

### ➤ Definition

Fixed point representation refers to numbers where the decimal (or binary) point is fixed at a specific position. It's commonly used in systems where performance and resource constraints are critical (e.g., embedded systems, DSPs).

### ➤ Key Characteristics

- Uses integer arithmetic for representation.
- Decimal point is implied, not stored.
- Easier to implement in hardware.
- Offers faster computations but limited dynamic range.

### ➤ Example

If using 2 decimal digits of precision:

- The number `123.45` might be stored as `12345`, and the system would interpret it as `123.45` based on a fixed scale.

---

## 🌊 Floating Point Numbers

### ➤ Definition

Floating point representation stores numbers using a scientific notation-like format. This allows a wide range of values with varying precision.

### ➤ Key Characteristics

- Based on IEEE 754 standard.
- Represents numbers as:  
  `(-1)^sign × mantissa × 2^exponent`
- Offers wide dynamic range and precision.
- Slightly slower due to complex arithmetic.

### ➤ Example

The number `123.45` in floating point might be represented (in simplified form) as:
- Sign: `+`
- Mantissa: `1.2345`
- Exponent: `2^6` (since `123.45 ≈ 1.2345 × 10^2`)

---

## 🆚 Comparison Table

| Feature             | Fixed Point           | Floating Point        |
|---------------------|------------------------|------------------------|
| Precision Control   | Manual (via scaling)   | Automatic              |
| Performance         | Faster (integer ops)   | Slower (complex ops)   |
| Range               | Limited                | Wide                   |
| Hardware Simplicity | High                   | Lower                  |
| Use Cases           | Embedded, DSPs         | Scientific computing   |

---

## 📂 Contents

- https://medium.com/@oumaimafisaoui/floating-and-fixed-point-representation-in-c-what-is-going-on-b71af54718a5

---

## 🛠️ How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/flaviogonca/CPP-Modules.git
   cd CPP-MODULE-02/ex0* eg: ex02
   make; ./a.out
