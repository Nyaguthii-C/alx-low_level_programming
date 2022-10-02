#include <stdio.h>

/**
 * main - prints every argument it receives
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc;)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
