#include "main.h"
/**
 * _strlen - Returns length of a string
 * @s: string
 * Return: Length of string
 */



int _strlen(char *s)
{
int gethis = 0;
while (*s != '\0')
{
gethis++;
s++;
}
return (gethis);
}
