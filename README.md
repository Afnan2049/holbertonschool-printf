# holbertonschool-printf


# Custom '_printf' Implementation

# Overview
This project is a custom implementation of the standard C library fu                                                                        nction 'printf'.
It provides formatted output to the standard output ('stdout') using                                                                         a subset of conversion specifiers.

The implementation is written in C and demonstrates the use of:
- Variadic functions ('stdarg.h')
- Low-level system calls ('write')
- Modular design with helper functions for different specifiers

#return value:
- returns the number of characters printed (excluding the null byte)
- returns -1 on error

------

#implementations details:

_printf.c:
- handles parsing of the format string.
- delegates work to helper functions based on specifier
- uses va_list to manage variable arguments 

functions.c
- print_char: prints a single character
- print_string: prints a string, handling NULL by printing "null"
- print_int: prints signed integers, including negative numbers.

main.h
- contains function prototypes and required headers

---

# Project Structure

# Core implementation of printf  -----------------------  _printf.c
# Helper functions for handling specifiers main.h  ------ functios.c
# Header file with function prototypes  ----------------  main.h
# Manual page describing usage  ------------------------  man_3_prin                                                                        tf


---

## Supported Format Specifiers
The following conversion specifiers are implemented:

| Specifier | Description                          |
|-----------|--------------------------------------|
| '%c'      | Prints a single character            |
| '%s'      | Prints a string (null-safe)          |
| '%d' / '%i' | Prints a signed integer in base 10 |
| '%%'      | Prints a literal `%` character       |

---

### Compilation
Use 'gcc' to compile the source files:
gcc -Wall -Werror -Wextra -pedantic *.c -o printf


#example program:
#include "main.h"

int main(void)
{
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello, World!");
    _printf("Integer: %d\n", 12345);
    _printf("Percent: %%\n");
    return (0);
}

output:
Character: A
String: Hello, World!
Integer: 12345
Percent: %


a custom manual page is included (man_3_printf)


authors:
Afnan mohammed alfaidi and Hanin taqi alsayed
Holberton School © 2024


