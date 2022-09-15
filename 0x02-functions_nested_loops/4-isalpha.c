#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: variable used for the argument
 * Return: 1 if c is an alphabetic xter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
