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
	int i = 0;

	for (*s != '\0'; ++i;)
		for (--i; i >= 0;)
		{
			putchar(s[i]);
		}
		putchar('\n');
}
