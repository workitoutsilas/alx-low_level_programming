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
unsigned int i;


for (i = 0; i < n; i++)
{
dest[i] = src[i];
n--;
}
return (dest);
}
