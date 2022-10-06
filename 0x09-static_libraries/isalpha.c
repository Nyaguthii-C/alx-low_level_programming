#include "main.h"

/**
* _isalpha - checks if character entered is an alphabet
* @c: character to be checked
*
* Return: On success 0
*/
int _isalpha(int c)
{
	for ((c = 'a' && c <= 'z') || (c = 'A' && c <= 'Z'); c++;)
	{
		_putchar(c);
	}
}
