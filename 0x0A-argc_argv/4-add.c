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

	if (argc <= 0)
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
	else if (argc > 0)
	{
		for (n = 1; n < argc; n++)
		{
			if (argv[n] >= '0' && argv[n] <= '9')
			{
				n++;
				add += atoi(argv[n]);
			}
			printf("%d\n", add);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		return (0);
}
