#include "main.h"

/**
* print_binary - prints an unsigned int in binary
* @n: number to print
*
* Return: number of characters printed
*/
int print_binary(unsigned int n)
{
int count = 0;
int i, started = 0;
char bit;

for (i = sizeof(n) * 8 - 1; i >= 0; i--)
{
bit = ((n >> i) & 1) + '0';
if (bit == '1')
started = 1;
if (started)
{
write(1, &bit, 1);
count++;
}
}
if (count == 0)
{
bit = '0';
write(1, &bit, 1);
count = 1;
}
return (count);
}
