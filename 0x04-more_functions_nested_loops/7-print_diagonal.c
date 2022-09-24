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

	if (n > 0)
	{
		while (i < n)
		{
			int count = 0;

			_putchar('\n');
			while (count < i)
			{
				_putchar(' ');
				count++;
			}
			_putchar('\\');
			i++;
		}
	}
}
