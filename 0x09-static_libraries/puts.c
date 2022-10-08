#include "main.h"

/**
* _puts - prints character to the standard output
* i is an index for argument in string
*@s: pointer
*
* Return: nothing
*/
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
