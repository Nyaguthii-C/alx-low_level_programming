#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: integer whose bit is set
* @index: position to set bit at
*
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pos, i;

	/* get the size of list*/
	i = (sizeof(unsigned long int) * 8) - 1;
	pos = 1;
	/* if index is greater than size of list, error*/
	if (index > i)
	{
		return (-1);
	}
	/* set variable to point at position of bit wanted */
	pos = pos << index;
	/* set value of bit */
	if ((pos | *n) == *n)
	{
		*n = *n ^ pos;
	}
	return (1);
}
