#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: the minimum value
* @max: the maximum value
 * Return: pointer to array
   */

int *array_range(int min, int max)
{
int n;
int range = max - min  + 1;
int *pointer;
if (min > max)
return (NULL);
pointer = malloc(range * sizeof(int));
if (pointer == NULL)
return (NULL);
for (n = 0; range > 0; range--, n++, min++)
pointer[n] = min;
return (pointer);
}
