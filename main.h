#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(va_list args, char *buffer, int *buf_index);
int print_string(va_list args, char *buffer, int *buf_index);
int print_int(va_list args, char *buffer, int *buf_index);
int print_binary(unsigned int n, char *buffer, int *buf_index);
int print_unsigned(va_list args, char *buffer, int *buf_index);
int print_octal(va_list args, char *buffer, int *buf_index);
int print_hex_lower(va_list args, char *buffer, int *buf_index);
int print_hex_upper(va_list args, char *buffer, int *buf_index);
int print_char(va_list args, char *buffer, int *buf_index);

#endif /* MAIN_H */
