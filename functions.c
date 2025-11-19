#include "main.h"
#include <unistd.h>

/**
* _putchar - writes a charecter c to standard output stdout
* @c: the character to print
* Return: on success 1
* on error, -1 is returned
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* print_string - prints a string
* @str: string to print
* Return: number of characters printed
*/
int print_string (char *str)
{
int count = 0;

if(!str)
str = "(null)";
while (*str)
count += _putchar(*str++);
return (count);
}

/**
* print_number - prints an integer
* @n: the integer to print
* Return: Number of characters printed
*/

int print_number (int n)
{
int count = 0;
unsigned int num;

if (n < 0)
{
count += _putchar ('_');
num = -n;
}

else
{
num = n;
}

if (num / 10)
count += print_number(num / 10);

count += _putchar((num % 10) + '0');
return (count);
}
