#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @c: Number to be checked
 * Return: Value of the last digit
 */



int print_last(int c)
{
int last;
last = n % 10;
if (last < 10)
{
last = last * -1;
}
_putchar(last + '0')
return (last)
}
