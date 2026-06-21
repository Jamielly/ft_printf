# FT_PRINTF

## Description

ft_printf is one of the core projects in the curriculum. The goal is to recreate the behavior of the standard C printf() function while gaining a deeper understanding of variadic functions, formatted output, and low-level memory management.

The project consists of implementing a custom version of printf called ft_printf, compiled as a static library named `libftprintf.a`.

Through this project, I learned how formatted output works internally, how variadic arguments are handled in C, and how to build modular and reusable code while respecting the 42 Norm.

---

## Project Overview

The implementation supports the following conversions:

* Characters
* Strings
* Pointers
* Signed integers
* Unsigned integers
* Hexadecimal numbers
* Percent symbol

All functions were implemented following the 42 Norm and compiled with:

```bash
-Wall -Wextra -Werror
```

---

## Features

* Custom implementation of `printf`
* Variadic function handling
* Decimal and hexadecimal number conversion
* Pointer address formatting
* Modular architecture
* Norm-compliant source code
* Static library generation

---

## Function Prototype

`int ft_printf(const char *format, ...);`

## Allowed External Functions

* malloc
* free
* write
* va_start
* va_arg
* va_copy
* va_end

### Supported Conversions

| Specifier |       Description        |
|-----------|--------------------------|
|   `%c`    | Character                |
|   `%s`    | String                   |
|   `%p`    | Pointer address          |
|   `%d`    | Decimal integer          |
|   `%i`    | Integer                  |
|   `%u`    | Unsigned decimal integer |
|   `%x`    | Lowercase hexadecimal    |
|   `%X`    | Uppercase hexadecimal    |
|   `%%`    | Percent sign             |

## Return Value

ft_printf returns the total number of characters printed, just like the original printf function.

---

## Project Structure
.
├── ft_printf.c
├── ft_print_utils.c
├── ft_printf.h
└── Makefile

## Instructions

### Requirements

* GCC or Clang
* Make
* Linux or macOS

### Compile

```bash
make
```

This generates:

```bash
libftprintf.a
```

### Clean Object Files

```bash
make clean
```

### Remove All Generated Files

```bash
make fclean
```

### Rebuild Everything

```bash
make re
```

---

## Usage

Include the header:

```c
#include "ft_printf.h"
```

Compile your project with the generated library:

```bash
gcc main.c libftprintf.a
```

or

```bash
gcc main.c -L. -lftprintf
```

## Example

```c
#include "ft_printf.h"

int	main(void)
{
	int n;
  
  n = 42;
  
  ft_printf("Hello %s!\n", "42");
  ft_printf("Number: %d\n", n);
  ft_printf("Hexadecimal: %x\n", n);
  ft_printf("Address: %p\n", &n);
  return (0);
}
```

---

## Technical Choices

Some implementation decisions made during the project:

* Separation of conversions into dedicated functions
* Recursive number printing
* Custom hexadecimal conversion
* Pointer formatting with `0x` prefix
* Reusable helper functions
* Strict compliance with the 42 Norm

---

## Testing

The project was validated using:

* Custom test cases
* Comparison against the original printf
* Edge case testing
* Norminette
* Valgrind memory analysis

Example:

```bash
valgrind --leak-check=full ./program
```

---

## Resources

### Documentation

* The C Programming Language — Brian W. Kernighan & Dennis M. Ritchie
* Linux Manual Pages (`man`)
* POSIX Documentation
* GNU C Documentation
* 42 Subject PDF

### References

* https://man7.org/linux/man-pages/
* https://cplusplus.com/
* https://developer.mozilla.org/

### AI Usage

Artificial Intelligence tools were used as learning assistants for:

* Concept clarification
* Documentation support
* Debugging guidance
* Understanding edge cases
* Code review suggestions

All implementations, testing, debugging, and final validation were completed manually by the author.

---

## What I Learned

This project strengthened my understanding of:

* Variadic functions (`stdarg.h`)
* Formatted output systems
* Recursive algorithms
* Number base conversions
* Pointer manipulation
* Static libraries
* Software modularization
* UNIX development workflows
* Writing reusable and maintainable C code

---

## Author

Jamielly R.

GitHub: https://github.com/Jamielly