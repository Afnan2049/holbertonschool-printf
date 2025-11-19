#include "main.h"
#include <stdarg.h>

/**
* _printf - writes output based on format
* @format: format specifier inside format string
* Return: number of characters printed
* excluding the null byte used to end output to strings
*/

int _printf (const char *format, ...)
{
va_list args;
int count = 0;
char *str;
char c;

if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
if (*format == '\0')
return(-1);

if (*format == 'c')
{
c = (char)va_arg(args, int);
count += _putchar(c);
}
else if (*format == 's')
{
str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
count += print_string(str);
}
else if (*format == '%')
{
count += _putchar('%');
}
else
{
count += _putchar('%');
count += _putchar(*format);
}
}
else
{
count += _putchar(*format);
}
format++;
}

va_end(args);
return (count);
}
