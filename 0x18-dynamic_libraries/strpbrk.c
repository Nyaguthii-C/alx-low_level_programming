#include "main.h"
#include <stddef.h>

/**
* _strpbrk - search s for any of a set of bytes in accept
* @s: initial string to scan for specified bytes
* @accept: string containing bytes also in s
* Return: pointer to byte(s) in s also present in accept
* else return NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
			else
			{
				return (NULL);
			}
		}
		s++;
	}
	return (0);
}
