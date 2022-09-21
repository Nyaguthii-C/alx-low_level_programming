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

	for (counter = 0; *s != '\0'; s++)
		++counter;

	putchar('\n');

}
