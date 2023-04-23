#include "main.h"

/**
 * print_square - prints a square followed by a ne line
 * @size: size of square
 *
 * Return: nothing
 */
void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar(' ');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
