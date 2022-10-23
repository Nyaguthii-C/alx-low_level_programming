#include "main.h"

/**
* print_number - prints integer
* @n: an integer to be printed
*
* Return: nothing
*/
void print_number(int n)
{
	unsigned int in = n;

	if (n < 0)
	{
		_putchar('-');

		in = -in;
	}
	if ((in / 10) > 0)
	{
		print_number(in / 10);
	}
	_putchar((in % 10) + '0');
}
