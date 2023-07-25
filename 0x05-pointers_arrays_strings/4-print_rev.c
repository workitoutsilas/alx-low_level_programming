#include "main.h"
/**
 * print_rev - Prints a sting in reverse
 * @s: String
 * Return: 0;
 */



void print_rev(char *s)
{
int LonGi = 0;
int op;

while (*s != '\0')
{
LonGi++;
s++;
}
s--;
for (op = LonGi; op > 0; op--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
