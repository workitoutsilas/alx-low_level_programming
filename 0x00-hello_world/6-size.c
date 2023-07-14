#include <stdio.h>
/**
 * main - A program that prints the size of various types of computer
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int c;
	long int b;
	long long d;
	float f;
printf("Size of a char: %lu bytes(s)\n",(unsigned long) sizeof(a));
printf("Size of an int: %lu bytes(s)\n",(unsigned long) sizeof(c));
printf("Size of a long int: %lu bytes(s)\n",(unsigned long) sizeof(b));
printf("Size of a long long int: %lu bytes(s)\n",(unsigned long) sizeof(d));
printf("Size of float: %lu bytes(s)\n",(unsigned long) sizeof(f));
return (0);
}
