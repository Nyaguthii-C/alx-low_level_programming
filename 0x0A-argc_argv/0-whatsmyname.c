#include "main.h"
#include <stdio.h>

/**
 * main - prints it's name followed by a new line
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always 0.
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	int i;/* = 0;*/

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
