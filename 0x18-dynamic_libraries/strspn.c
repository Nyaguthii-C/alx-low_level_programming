#include "main.h"

/**
* _strspn - returns length of s1 contained in accept
* @s: initial string
* @accept: string to be checked for substring also found in @s
*
* Return: length of substring in s
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; i++;)
	{
		if (s[i] == accept[i])
		{
			return (_strlen(s));
		}
	}
	return (0);
}
