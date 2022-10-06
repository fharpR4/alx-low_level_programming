#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - function that concatenates two strings
* @s1: first string
* @s2: second string
* Return: Null if not successful
 */

char *str_concat(char *s1, char *s2)
{
unsigned int roe1 = 0, roe2 = 0;
char *ptr, *favour;
ptr = s1;
if (s1)
while (*ptr++)
roe1++;
else
s1 = "";
ptr = s2;
if (s2)
while (*ptr++)
roe2++;
else
s2 = "";
roe = malloc(favour1 + favour2 + 1);
if (!favour)
return (NULL);
ptr = favour;
while (*s1)
*ptr++ = *s1++;
while (*s2)
*ptr++ = *s2++;
*ptr = 0;
return (favour);
}
