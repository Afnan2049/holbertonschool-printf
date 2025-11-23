#include "main.h"

/**
* print_unsigned - prints an unsigned integer
* @args: list of arguments
*
* Return: number of characters printed
*/
int print_unsigned(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
char buf[11];
int i = 0, count = 0;

if (num == 0)
return (write(1, "0", 1));

while (num > 0)
{
buf[i++] = (num % 10) + '0';
num /= 10;
}
while (i > 0)
{
count += write(1, &buf[--i], 1);
}
return (count);
}

/**
* print_octal - prints an unsigned integer in octal
* @args: list of arguments
*
* Return: number of characters printed
*/
int print_octal(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
char buf[12];
int i = 0, count = 0;

if (num == 0)
return (write(1, "0", 1));

while (num > 0)
{
buf[i++] = (num % 8) + '0';
num /= 8;
}
while (i > 0)
{
count += write(1, &buf[--i], 1);
}
return (count);
}

/**
* print_hex_lower - prints an unsigned integer in lowercase hex
* @args: list of arguments
*
* Return: number of characters printed
*/
int print_hex_lower(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
char buf[9];
int i = 0, count = 0;
char *hex = "0123456789abcdef";

if (num == 0)
return (write(1, "0", 1));

while (num > 0)
{
buf[i++] = hex[num % 16];
num /= 16;
}
while (i > 0)
{
count += write(1, &buf[--i], 1);
}
return (count);
}

/**
* print_hex_upper - prints an unsigned integer in uppercase hex
* @args: list of arguments
*
* Return: number of characters printed
*/
int print_hex_upper(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
char buf[9];
int i = 0, count = 0;
char *hex = "0123456789ABCDEF";

if (num == 0)
return (write(1, "0", 1));

while (num > 0)
{
buf[i++] = hex[num % 16];
num /= 16;
}
while (i > 0)
{
count += write(1, &buf[--i], 1);
}
return (count);
}
