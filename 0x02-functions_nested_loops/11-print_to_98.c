#include "main.h"
/**
 * print_to_98 - Print natural numbers from n to 98
 * @n: Number to start the printing from.
 * Return: Always 0
 */ 



int print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
}
}
}
