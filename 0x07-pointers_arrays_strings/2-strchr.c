#include "main.h"

/**
*_strchr - searches for the first occurrence of the character c
    *@s: this is the string to be scanned
     *@c: this is the character to be searched in s
      *Return: 0
    */
char *_strchr(char *s, char c)
{
int night = 0;/*Night was assigned 0*/
while (s[night] != 0) /*if s is not equal to 0*/
{
if (s[night] == c)/*if s[night] is  equal or not to c*/
return (s + night); /*return value if ture*/
night++;
}
if (c == 0) /* if c is equal or not to 0*/
return (s + night); /*return value if true*/
return (0);
}
