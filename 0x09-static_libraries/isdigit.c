#include "main.h"

/**
*_isdigit - check whether character entered is a number 0-9
* @c: interger argument of function _isdigit
*
* Return:non-zero if it is a digit else return 0
*/
int _isdigit(int c)
{
	int i = 0;

	while (c != '\0')
	{
		if (i >= '0' && i <= '9')
		{
			return (i);
			/*i++;*/
		}
		i++;
	}
	return (0);
}
