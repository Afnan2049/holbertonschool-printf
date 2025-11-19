#include "main.h"

/**
 * print_char - prints a single character
 * @args: argument list
 * Return: number of characters printed
 */
int print_char(va_list args)
{
char c = va_arg(args, int);
return (write(1, &c, 1));
}

/**
 * print_string - prints a string
 * @args: argument list
 * Return: number of characters printed
 */
int print_string(va_list args)
{
char *s = va_arg(args, char *);
int i = 0;

if (s == NULL)
s = "(null)";

while (s[i])
{
write(1, &s[i], 1);
i++;
}

return (i);
}
