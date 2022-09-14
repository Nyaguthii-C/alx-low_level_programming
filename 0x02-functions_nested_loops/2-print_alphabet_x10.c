#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char j, x;

	for (j = '0'; j < 10 ; j++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
