#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
   * Return: pointer to a 2 dimensional array of integers.
  */

int **alloc_grid(int width, int height)
{
int **roe;
int i, a;
if (width <= 0 || height <= 0)
return (NULL);
roe = malloc(height * sizeof(int *));
/* if roe is equal to Null return Null*/
if (roe == NULL)
return (NULL);
/*for every i thats 0 and less than height increase i*/
for (i = 0; i < height; i++)
{
/*size of roe[i] using malloc*/
roe[i] = malloc(width * sizeof(int));
/*check if roe[i] is equal to Null*/
if (roe[i] == NULL)
{
while (i >= 0)
/*free roe[i]*/
free(roe[i--]);
/* Free roe*/
free(roe);
return (NULL);
}
/*for every a that is less than width increase a*/
for (a = 0; a < width; a++)
roe[i][a] = 0;
}
return (roe);
}
