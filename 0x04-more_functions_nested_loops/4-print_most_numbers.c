#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints number from 0 to 9 except 2 and 4
 * _putchar -prints each number
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if ((i == 50) || (i == 52))
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
