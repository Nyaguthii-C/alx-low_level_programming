#include "main.h"
#include <stddef.h>

/**
* print_binary - prints a binary given an int
* @n: int value to print as binary
*
* Return: void
*/
void print_binary(unsigned long int n)
{
	/**
	* if the number > 1, right shift to operate on each bit
	* if the bit is 1, put 1 and if 0, 0
	*/

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
