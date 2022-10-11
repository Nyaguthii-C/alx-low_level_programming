#include "main.h"

/**
*_memcpy - copies n characters
* from memory area src to memory area dest
* @dest: memory area dest
* @src: memory area src
* @n: number of characters to be copied
*
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
