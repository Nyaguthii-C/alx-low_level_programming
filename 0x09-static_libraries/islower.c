#include "main.h"

/**
* _islower - checks if character is lowercase alphabet
* @c: character to be checked
* _putchar - prints character
* Return: always 0.
*/
int _islower(int c)
{
	for (c = 'a'; c <= 'z';)
	{
		_putchar(c);
	}
}
