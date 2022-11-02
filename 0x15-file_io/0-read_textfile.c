#include "main.h"

/**
* read_textfile - a function that reads a file and prints to stdout
* @filename: a pointer to the file
* @letters: the letters we want
* Return: the actual numbers of letters it read or 0 if error
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int text;
	int reading;
	char *red;

	red = malloc(sizeof(char) * letters + 1);
	if (!red || !filename)
		return (0);

	text = open(filename, O_RDONLY);
	if (text == -1)
	{
		free(red);
		return (0);
	}
	reading = read(text, red, letters);
	if (reading == -1)
	{
		close(text);
		free(red);
		return (0);
	}
	red[reading] = '\0';
	if ((write(STDOUT_FILENO, red, reading)) == -1)
	{
		close(text);
		free(red);
		return (0);
	}
	close(text);
	free(red);
	return (reading);
}
