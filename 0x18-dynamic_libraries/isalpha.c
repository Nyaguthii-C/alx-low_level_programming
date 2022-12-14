#include "main.h"

/**
* _isalpha - checks if character entered is an alphabet
* @c: character to be checked
*
* Return: On success, non-zero,  0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
