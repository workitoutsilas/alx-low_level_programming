#include "main.h"
/**
 * print_array - Function that rints n elements of an array
 * @a : array_name
 * @n: Number of arrays
 * Return: a and n inputs
 */



void print_array(int *a, int n)
{
int b;
for (b = 0; b < (n - 1); b++)
{
printf("%d", a[b]);
}
if (b == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n")
}
