#include "main.h"

/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: number
 *
 * Return: -1 if number is less than 0,
 * 0 if number is 0.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	n--;
	return (1 * _sqrt_recursion(n));
}
