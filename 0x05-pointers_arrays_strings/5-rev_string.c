#include "main.h"

/**
 * rev_string - reverses string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;

	for (s[i] != '\0'; --s)
	{
		putchar(i);
	}
}
