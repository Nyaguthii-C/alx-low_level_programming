#include "main.h"

/**
* _memset - fill memory with a constant byte
* @s: string pointer
* @b:constant byte
* @n: bytes in the memory area
*
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
