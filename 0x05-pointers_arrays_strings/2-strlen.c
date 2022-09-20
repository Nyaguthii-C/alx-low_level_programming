#include "main.h"
#include <string.h>
/**
 * _strlen -prints the length of the string
 * @s: the value
 * Return: nothing
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}
