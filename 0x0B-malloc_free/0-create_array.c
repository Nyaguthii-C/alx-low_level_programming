#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars,
* and initializes it with a specific char
* @size: size of array
* @c:character initializing array
*
* Return: pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
	return (0);
}
