#include <stdio.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0;
 */
int main(int argc, char *argv[])
{
	int n = 0;
	int add = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else if (n < 48 && n > 57)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		for (n = 1; n < argc; n++)
		{
			add += atoi(argv[n]);
		}
		printf("%d\n", add);
	}
	return (0);
}
