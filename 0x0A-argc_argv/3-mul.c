#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
int night, burn;
if (argc == 3)
{
night = atoi(argv[1]);
burn = atoi(argv[2]);
printf("%d\n", night *burn);
return (0);
}
printf("Error\n");
return (1);
}
