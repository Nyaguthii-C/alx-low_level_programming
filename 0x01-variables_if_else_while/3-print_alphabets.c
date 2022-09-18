#include <stdio.h>

/**
 * main -prints alphabet in lowecase
 * followed by lowercase
 * putchar - prints alphabet and newline
 *
 * Return: 0 always
 */

int main(void)
{
	char lower = 'a';
	char upper = 'b';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
