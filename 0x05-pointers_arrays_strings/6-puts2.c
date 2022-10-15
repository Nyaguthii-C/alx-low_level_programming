#include "main.h"

/**
* puts2 - prints every other character of a string
* @str: string from which characters are printed
*
* Return: nothing
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
