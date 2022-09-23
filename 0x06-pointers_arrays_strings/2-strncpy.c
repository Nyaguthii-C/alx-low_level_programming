#include "main.h"

/**
 * _strncpy - copies the src string to the dest string
 * @src: source string
 * @dest: destination string
 * @n: number of bytes used from src
 *
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n && src[i] != '\0'); i++)
		dest[i] = src[i];
	for (;i < n; i++)
		dest[i] = '\0';
	return (dest);
}
