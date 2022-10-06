#include "main.h"

/**
* _strlen - funds length of string
* @s: string
*
* Return: the counter;
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; ++s)
	{
		i++;
		return (i);
	}
}
