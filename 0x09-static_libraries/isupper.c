#include "main.h"

/**
* _isupper - checks if character is an uppercase  letter of the alphabet
* @c: character
* _putchar -prints character
*
* Return: Always 0
*/
int _isupper(int c)
{
	for (c = 'A'; c <= 'Z';)
	{
		_putchar(c);
		c++;
	}
	return (0);
}

