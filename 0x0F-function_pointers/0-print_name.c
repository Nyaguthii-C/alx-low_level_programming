#include "main.h"

/**
* print_name - prints the name
* @name: pointer to name
* @f: pointer to function
*
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
