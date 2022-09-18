#include <stdio.h>

/**
 * main - prints all single digit number of base 10 starting from 0
 * putchar - prints numbers and newline
 *
 * Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
