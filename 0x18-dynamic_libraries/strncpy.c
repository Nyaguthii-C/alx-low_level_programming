#include "main.h"

/**
* _strncpy - copies string from source to destination string
* @dest: destination string
* @src: source string
* @n:size of string
*
* Return: dest;
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		return (dest);
	}
	return (0);
}
