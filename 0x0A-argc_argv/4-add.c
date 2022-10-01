#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* main - add
* @argc: int
* @argv: string
 * Return: int
*/

int main(int argc, char *argv[])
{
int night = 0, i, j;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (isdigit(argv[i][j]) == 0)
{
printf("Error\n");
return (1);
}
}
}
for (i = 1; i < argc; i++)
{
night += atoi(argv[i]);
}
printf("%d\n", night);
return (0);
}
