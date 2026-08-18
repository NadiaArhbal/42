# 🖨️ Ft_printf - Variadic Printing Engine

## 📝 Project Overview
This project focuses on re-engineering the standard `printf` function from the C library. The core objective is to master **variadic functions arguments** in C while optimizing buffer output streams through kernel-level system writes.

---

## 🔬 Supported Conversion Formats
The implementation parses incoming format strings and dynamically manages variable parameter counts to evaluate these explicit type flags:

* `%c`: Single character conversion.
* `%s`: String pointer parsing (including native safe handling of `NULL` strings).
* `%p`: Memory address print in hexadecimal format.
* `%d` / `%i`: Signed base 10 integer evaluation.
* `%u`: Unsigned base 10 integer output conversion.
* `%x` / `%X`: Unsigned base 16 hexadecimal representation (lowercase / uppercase matrix format).
* `%%`: Escape parameter to output a literal percent sign.

---

## 🧠 Low-Level Engineering Highlights
1. **Variadic Parameters Interception:** Proper manipulation of standard macros (`va_start`, `va_arg`, `va_copy`, `va_end`) to securely extract variable arguments on the execution stack.
2. **Hexadecimal Memory Parsing:** Implementing algorithmic transformations to translate 64-bit memory pointer addresses into visible hex string representations.
3. **Strict Parameter Validation:** Preventing execution drops or segmentation faults when parsing invalid parameter configurations.
