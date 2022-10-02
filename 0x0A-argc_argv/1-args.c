#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument counter
 * @argv: argument strings
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
