#include "main.h"

/**
 * _strncat - concatenates two strings using
 * at most n bytes from src
 * @dest: the string destination
 * @src: the string source
 * @n: number of bytes used from src
 * Return: the dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int count1 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (count < n)
	{
		*(dest + count) = *(src + count1);
		if (*(src + count1)  == '\0')
			break;
		count++;
		count1++;
	}
	return (dest);
}
