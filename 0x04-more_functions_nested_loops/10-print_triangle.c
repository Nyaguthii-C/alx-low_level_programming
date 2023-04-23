#include "main.h"

/**
* print_triangle -  prints a triangle, followed by a new line
* @size: size of triangle
*
* Return: nothing
*/
void print_triangle(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 0; column < size - row; column++)
			{
				_putchar(' ');
			}
			for (column = 1; column <= row; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
