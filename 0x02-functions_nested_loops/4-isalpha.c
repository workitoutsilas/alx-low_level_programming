#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: letter under check ( whether lowercase or uppercase )
 * Return: 1 if c is a letter, lower or uppercase or 0 for othewise
 */



int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return  (0);
}
