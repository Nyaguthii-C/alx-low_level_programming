#include <stdio.h>

/**
 * main -print all possible combinations of single digit numbers
 *
 * Return: 0 always
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n < '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	return (0);
}
