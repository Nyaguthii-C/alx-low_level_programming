#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* _strdup - returns  a pointer to a newly allocated space in memory
* which contains a copy of the string given as a parameter
* @str: pointer to a string
*
* Return: ptr to copy of str of NULL  if insufficient memory
*/
char *_strdup(char *str);
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(str));
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
