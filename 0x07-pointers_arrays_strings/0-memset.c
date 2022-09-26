#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: a char pointer given by main
 * @b: a constant byte
 * @n: how many byte of memory
 * Return: pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
int night = 0; /*Night is my variable and was assigned 0*/
while (n > 0) /*as long as n is less than zero*/
{
s[night] = b; /*Night is assigned to our char*/
night++; /*post-increment, value first incremented afterwards*/
n--; /*post-decrement*/
}
return (s); /*returning pointer to the memory of s*/
}
