#include "main.h"

/**
 * print_diagonal - prints a line
 * @n: number of times to print \
 * _putchar - prints the character \
 */

void print_diagonal(int n)
{
	while (n-- > 0)
	{
		_putchar(' \\');
		_putchar('\n');
	}
	_putchar('\n');
}
