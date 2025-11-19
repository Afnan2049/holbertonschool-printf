#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - produces output according to a format
 * @format: format string
 * Return: number of printed characters
 */
int _printf(const char *format, ...);

/**
 * print_char - prints a character
 * @args: argument list
 * Return: number of chars printed
 */
int print_char(va_list args);

/**
 * print_string - prints a string
 * @args: argument list
 * Return: number of chars printed
 */
int print_string(va_list args);

#endif /* MAIN_H */
