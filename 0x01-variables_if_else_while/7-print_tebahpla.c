#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: 0 always
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a' && c <= 'z')
	{
		putchar (c);
		c--;
	}
	putchar ('\n');

	return (0);
}
