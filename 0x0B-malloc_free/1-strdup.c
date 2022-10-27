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
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for(i = 0; str[i]; i++)
		{
			ptr = malloc(i sizeof(char));
		}
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
 	else
	{
		for (j = 0; j < i; j++)
		{
			ptr[j] = str[j];
		}
		
	}
	return (ptr);
}
