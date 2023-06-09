#include "main.h"

/**
* binary_to_uint - a function that converts a binary number
*to an unsigned int
* @b: pointer to character
*
* Return: converted value or 0 on failure
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		conv <<= 1;
		if (*b & 1)
		{
			conv += 1;
		}
		b++;
	}
	return (conv);
}
