#include "main.h"

/**
 * print_line -prints a line
 * @n: number of times to print _
 * _putchar - prints the character _
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
