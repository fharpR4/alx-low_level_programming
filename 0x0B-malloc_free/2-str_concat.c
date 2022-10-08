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
unsigned int ceo1 = 0, ceo2 = 0;
char *ptr, *burn;
ptr = s1;
if (s1)
while (*ptr++)
ceo1++;
else
s1 = "";
ptr = s2;
if (s2)
while (*ptr++)
ceo2++;
else
s2 = "";
burn = malloc(ceo1 + ceo2 + 1);
if (!burn)
return (NULL);
ptr = burn;
while (*s1)
*ptr++ = *s1++;
while (*s2)
*ptr++ = *s2++;
*ptr = 0;
return (burn);
}
