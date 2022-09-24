#include "main.h"

/**
 * print_diagonal - prints a line
 * @n: number of times to print '\'
 * _putchar - prints the character '\'
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i = 1;

	while (i <= n)
	{
		while (i < 1)
		{
			_putchar('\n');
		}
		_putchar('\n');
		_putchar('\\');
		i++;
	}
}
