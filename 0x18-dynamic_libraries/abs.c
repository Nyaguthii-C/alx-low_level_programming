#include "main.h"

/**
* _abs - checks for acsolute number
* @n: interger
*
* Return:Always 0;
*/
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	return (0);
}
