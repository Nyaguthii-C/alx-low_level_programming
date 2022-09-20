#include "main.h"

/**
 * _puts - prints string to standard output
 * putchar - inserts a  character into string
 * @str: the string
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
