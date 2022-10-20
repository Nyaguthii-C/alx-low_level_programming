#include "main.h"

/**
* _strcpy - copies string pointed by src to dest
* including terminating null byte.
* @dest: pointer to dest string
* @src: pointer to src string
*
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
