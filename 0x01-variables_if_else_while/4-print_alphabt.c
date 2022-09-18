#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 *
 * Return: 0 always
 */

int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if ((l == 'q') || (l == 'e'))
		{
			continue;
		}
		putchar(l);
	}
	return (0);
}
