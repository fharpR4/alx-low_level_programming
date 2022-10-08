#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars, and initializes it with a specific
  * @size: the size the main function gave
  * @c: the character we are given
 * Return: pointer else return null
  */

char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int night = 0;
if (size == 0)
return (NULL);
ptr = malloc(size * sizeof(char));
if (ptr == NULL)
return (NULL);
while (night < size)
{
ptr[night] = c;
night++;
}
return (ptr);
}
