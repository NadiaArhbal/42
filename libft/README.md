# 📦 Libft - Custom C Standard Library

## 📝 Project Overview
This project consists of rewriting fundamental standard C library functions from scratch, along with additional standalone system utilities. It serves as an academic deep dive into data representation, memory boundaries, and string parsing mechanics.

---

## 🔬 Technical Scope & Modules

### 1. Standard Libc Functions Re-implemented
* **Memory Management:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`.
* **String Analysis & Manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`.
* **Type Character Filtering:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
* **Conversions:** `ft_atoi`.

### 2. Advanced Custom Allocations
* **Dynamic Heap Allocations:** `ft_calloc`, `ft_strdup`.
* **Substring & Joining Utilities:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`.
* **Data Transformation:** `ft_itoa`, `ft_strmapi`, `ft_striteri`.
* **File Descriptor System Outputs:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### 3. Dynamic Data Structures (Bonus List Module)
* **Linked List Framework:** Node creation and queue manipulation algorithms using structured pointer paths (`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`).

---

## 🛠️ Compilation & Integration
The project embeds a structured `Makefile` automated compilation engine:
* Run `make` to compile source files into a static library archive (`libft.a`).
* Run `make clean` or `make fclean` to remove object binaries.

