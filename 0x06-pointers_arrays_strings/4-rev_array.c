#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int a;
int b;

for (c = 0; a < n--; c++)
{
b = a[c];
a[c] = a[n];
a[n] = b;
}
}
