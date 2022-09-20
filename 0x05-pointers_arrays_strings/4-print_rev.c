#include "main.h"

/**
 * print_rev - print_rev
 * _putchar - inserts character
 * @s: pointer
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		--i;
	}
	_putchar('\n');
}
