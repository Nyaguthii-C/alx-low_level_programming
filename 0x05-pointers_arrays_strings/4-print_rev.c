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
	int counter;
	int i = 0;

	for (counter = 0; *s != '\0'; s++)
		++counter;
	putchar(s[i]);
	putchar('\n');

}
