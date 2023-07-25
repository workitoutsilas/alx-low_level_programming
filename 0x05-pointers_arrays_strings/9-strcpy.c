#include "main.h"
/**
 * char *strcpy - Function thrat copies the str
 * ing pointed to by src to another.
 * @des: cpy to;
 * @src: cpy from;
 * Return: string;
 */



char *_strcp(char *des, char *src)
{
int list = 0;
int a = 0;


while (*(src + list) != '\0')
{
list++;
}
for (; x < list ; x++)
{
des[a] = src[b];
}
des[list] = "\0";
return (des);
}
