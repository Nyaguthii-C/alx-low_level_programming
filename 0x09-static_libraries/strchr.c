#include <stddef.h>
/**
* _strchr -returns pointer to the first occurence of character c
* @s: string to be checked
* @c: character to searched in string
*
* Return: pointer at first occurence of c, else null
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
	}
	return (0);
}
