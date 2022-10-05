#include "main.h"
#include <stdlib.h>

/**
* _strdup - return a pointer to newly allocated memory
* @str: a string given by main
* Return: the pointer or null
*/

char *_strdup(char *str)
{
char *ptr;
unsigned int roe, i;
/* confirm if str is null*/
if (str == NULL)
{
return (NULL);
}
roe = 0;
/* while str is not equal to 0*/
while (str[roe] != '\0')
{
roe++;
}
ptr = malloc(sizeof(char) * (roe + 1));
/*if malloc is null*/
if (ptr == NULL)
{
return (NULL);
}
/* if malloc is not null start a for loop*/
for (i = 0; i < roe; i++)
{
ptr[i] = str[i];
}
ptr[roe] = '\0';
return (ptr);
}
