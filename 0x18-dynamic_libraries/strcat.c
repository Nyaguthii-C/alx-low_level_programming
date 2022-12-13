#include "main.h"

/**
* _strcat - appends the src string to dest
* @dest: destination string
* @src: source string
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
