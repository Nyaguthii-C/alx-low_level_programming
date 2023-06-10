#include "main.h"

/**
* get_bit - get value of bit at given index
* @n: number to get bit value of
* @index: position of bit whose value is returned
*
* Return: value of bit at index or -1 if error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, pos = 1;

	i = (sizeof(unsigned long int) * 8) - 1;
	if (n == 0)
	{
		return (0);
	}
	/* set a variable to the index whose bit value we want */
	pos = pos << index;
	/* if index is greater than the number of digits, error */
	if (index > i)
	{
		return (-1);
	}
	/* check if the bit at the specified index is set (1) */
	if (pos & n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
