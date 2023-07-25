#include "main.h"
/**
 * rev_string - reverses a string
 * @s: Input string
 * Return: String in reverse
 */



void rev_string(char *s)
{
char revv = s[0];
int count = 0;
int i;


while (s[count] != '\0')
count++;
for (i = 0; i < count; i++)
{
count--;
revv = s[i];
s[i] = s[count];
s[count] = revv;
}
}
