#include "main.h"

/**
 * _puts - prints string to styandard output
 * putchar - inserts a  character into string
 *@i: integer
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
