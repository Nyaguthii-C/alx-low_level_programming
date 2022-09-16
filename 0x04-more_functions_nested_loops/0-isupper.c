#include "main.h"

/**
 * _isupper -checks for uppercase character
 *@c: represents a random character entered
 *
 * Return: 1 if uppercase 0 if not
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
		c++;
	}
	else
		return (0);
}
