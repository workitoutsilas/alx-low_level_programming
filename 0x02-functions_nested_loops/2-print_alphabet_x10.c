#include "main.h"
/**
 * main - check the code
 *
 * Return: Always  0
 */


void print_alphabet(void)
{
char ch;
int i;
i = 0 ;
while ( i < 10 )
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}
}
