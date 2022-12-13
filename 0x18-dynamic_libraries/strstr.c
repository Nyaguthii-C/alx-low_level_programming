#include "main.h"
#include <stddef.h>

/**
* _strstr - finds first occurence of substring needle in string haystack
* @needle: string searched in haystack
* @haystack: string cthat may contain needle
* Return: pointer to first occurence of needle
* else return NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (haystack)
	{
		for (i = 0; i++;)
		{
			if (haystack[i] == needle[i])
			{
				return (needle);
				i++;
			}
			else
			{
				return (NULL);
			}
		}
		haystack++;
	}
	return (0);
}
