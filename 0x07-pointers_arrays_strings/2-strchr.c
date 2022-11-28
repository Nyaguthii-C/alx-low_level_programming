#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character c in a string s
* @s: pointer to string s
* @c: character to be located
*
* Return: pointer to first occurrence of c in string s
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
