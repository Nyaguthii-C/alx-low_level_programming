#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * @n: number entered
 * Return: Always 0;
 */
int main(int argc, char *argv[])
{
	int n;
	int mul = 1;

	if (argc < 3 || argc >= 4)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (n = 1; n < argc; n++)
		{
			mul *= atoi(argv[n]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
