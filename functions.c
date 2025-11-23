#include "main.h"

/**
* print_char - prints a single character
* @args: list of arguments
* @buffer: local buffer
* @buf_index: current buffer index
*
* Return: number of characters printed
*/
int print_char(va_list args, char *buffer, int *buf_index)
{
char c = va_arg(args, int);
buffer[(*buf_index)++] = c;

if (*buf_index == 1024)
{
write(1, buffer, *buf_index);
*buf_index = 0;
}
return (1);
}

/**
* print_string - prints a string
* @args: list of arguments
* @buffer: local buffer
* buf_index:current buffer index
*
* Return: number of characters printed
*/
int print_string(va_list args, char *buffer, int *buf_index)
{
char *s = va_arg(args, char *);
int i = 0, count = 0;

if (s == 0)
s = "(null)";

while (s[i] != '\0')
{
buffer[(*buf_index)++] = s[i];
count++;

if (*buf_index == 1024)
{	
write(1, buffer, *buf_index);
*buf_index = 0;
}
i++;
}
return (count);
}

/**
* print_int - prints an integer
* @args: list of arguments
* @buffer: local buffer
* @buf_index: current buffer index
*
* Return: number of characters printed
*/
int print_int(va_list args, char *buffer, int *buf_index)
{
int n = va_arg(args, int);
unsigned int num;
int count = 0;
char buf[11];
int i = 0;
char digit;

if (n < 0)
{
buffer[(*buf_index)++] = '-';
count++;
if (*buf_index == 1024)
{
write(1, buffer, *buf_index);
*buf_index = 0;
}
num = (unsigned int)(-n);
}
else
{
num = (unsigned int)n;
}
if (num == 0)
{
buffer[(*buf_index)++] = '0';
count++;
if (*buf_index == 1024)
{
write(1, buffer, *buf_index);
*buf_index = 0;
}
return (count);
}
while (num > 0)
{
digit = (char)('0' + (num % 10));
buf[i] = digit;
num /= 10;
i++;
}
while (i > 0)
{
i--;
buffer[(*buf_index)++] == buf[i];
count++;
if (*buf_index == 1024)
{
write(1, buffer, *buf_index);
*buf_index = 0;
}
}
return (count);
}
