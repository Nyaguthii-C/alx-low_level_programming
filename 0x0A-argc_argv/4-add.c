#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0;
 */
int main(int argc, char *argv[])
{
	int i, j;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	/**
	*else if (argv[n] < 0 && argv[n] > 9)
	*{
	*	printf("Error\n");
	*	return (0);
	*}
	*/
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; *(argv[i] + j) != '\0'; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
				{
					continue;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
		}
		printf("%u\n", add);
	}

	return (0);
}
