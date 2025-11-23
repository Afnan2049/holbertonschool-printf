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
int i = 0;
int count = 0;
char buffer[1024];
int buf_index = 0;

if (format == 0)
{
return (-1);
}

va_start(args, format);

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
count += print_char(args, buffer, &buf_index);
}
else if (format[i] == 's')
{
count += print_string(args, buffer, &buf_index);
}
else if (format[i] == 'd' || format[i] == 'i')
{
count += print_int(args, buffer, &buf_index);
}
else if (format[i] == 'b')
{
count += print_binary(va_arg(args, unsigned int), buffer, &buf_index);
}
else if (format[i] == '%')
buffer[buf_index++] = '%';
else
{
buffer[buf_indx++] = '%'
buffer[buf_index++] = format[i];
}
else
{
buffer[buf_index++] = format[i];
}

if (buf_index == 1024)
{
write(1, buffer, buf_index);
count += buf_index;
buf_index = 0
}
i++;
}
if (buf_index > 0)
{
write(1, buffer, buf_index);
count += buf_index;
}
{
count += write(1, "%", 1);
}

else if (format[i] == 'u')
{
count += print_unsigned(args);
}
else if (format[i] == 'o')
{
count += print_octal(args);
}
else if (format[i] == 'x')
{
count += print_hex_lower(args);
}
else if (format[i] == 'X')
{
count += print_hex_upper(args);
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
