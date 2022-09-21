#include "main.h"

/**
 * print_rev - print_rev
 * putchar - inserts character
 * @s: pointer
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;
	for (--i; i >= 0; --i)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
