#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: the format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int i;
int count;

if (format == NULL)
{
return (-1);
}

va_start(args, format);
i = 0;
count = 0;

while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
if (format[i] == '\0')
{
va_end(args);
return (-1);
}
if (format[i] == 'c')
{
count += print_char(args);
}
else if (format[i] == 's')
{
count += print_string(args);
}
else if (format[i] == '%')
{
count += write(1, "%", 1);
}
else
{
count += write(1, "%", 1);
count += write(1, &format[i], 1);
}
}
else
{
count += write(1, &format[i], 1);
}
i++;
}

va_end(args);
return (count);
}
