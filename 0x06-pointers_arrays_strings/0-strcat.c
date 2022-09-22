#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: string that gets appended to dest
 * @dest: string that gets anothe string appended
 * _putchar - prints character
 * Return: nothing
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

