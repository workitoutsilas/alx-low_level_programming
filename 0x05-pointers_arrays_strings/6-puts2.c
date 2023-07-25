#include "main.h"
/**
 * puts2 - Prints just a character out of two
 * starting with the first
 * @str: input
 * Return: print
 */



void puts2(char *str)
{
int LonGi = 0;
int a = 0;
char *y = str;
int e;


while (*y != '\0')
{
y++;
LonGi++;
}
a = LonGi - 1;
for (e = 0; e <= a; e++)
{
if (e %2 == 0)
{
_putchar(str[e]);
}
}
_putchar('\n');
}
