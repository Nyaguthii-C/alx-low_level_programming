#include "main.h"

/**
* _strncat - appends the src string to dest
* @dest: destination string
* @src: source string
* @n: number of bytes used from src
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n;)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
