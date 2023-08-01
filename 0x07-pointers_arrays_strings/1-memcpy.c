#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes to move
 * Return: Always 0 (Success)
 */



char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}

