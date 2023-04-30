#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters
* @n: number of parameters
*
* Return: sum af all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list argz;

	va_start(argz, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(argz, int);
		}
	}
	va_end(argz);
	return (sum);
}
