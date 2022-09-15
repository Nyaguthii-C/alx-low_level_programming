#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @j: integer value for our number
 * Return: value  of the last digit
 */

int print_last_digit(int j)
{
	int LD = j % 10;

	if (LD < 0)
		LD *= -1;
	_putchar (LD + '0');

	return (LD);
}

