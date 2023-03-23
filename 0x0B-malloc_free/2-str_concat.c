#include "main.h"
#include <string.h>
/**
* str_concat - concatenates two strings and return pointer to new str
* @s1: first string to be concat'ed
* @s2: second string to be concat'ed
*
* Return: pointer to newly aloc space with s1+s2
*/
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0;
	int i, j;
	char *s3;
	/*check if sring is empty*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* traverse through the string counting length */
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	/* allocate size to pointer equivalent to strings */
	s3 = malloc(a * sizeof(char) + (b + 1) * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}
	/* concatenate strings */
	for (j = 0; s1[j]; j++)
	{
		s3[j] = s1[j];
	}
	for (i = 0; s2[i]; i++)
	{
		s3[j] = s2[i];
		j++;
	}
	return (s3);
}
