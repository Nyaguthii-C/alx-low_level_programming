#include "main.h"

/**
 * print_numbers - prints number from 0 to 9
 * _putchar -prints each number
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9;)
	{
		_putchar(i);
		i++;
	}
_putchar('\n');
}
