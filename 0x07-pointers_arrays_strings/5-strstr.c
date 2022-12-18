#include "main.h"

/**
* _strstr - finds the first occurrence of the substring needle
* in the string haystack
* @haystack: pointer to string where we search
* @needle: pointer to string being searched
*
* Return: pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[i])
		{
			return (needle);
		}
	}
	return (0);
}
