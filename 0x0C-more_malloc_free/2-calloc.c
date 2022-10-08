#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - allocated memory for nmeb element of size bytes
  * @nmemb: number of element in the array
  * @size: bytes for each position in array
  * Return: pointer void
    */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
p[i] = 0;
return (p);
}
