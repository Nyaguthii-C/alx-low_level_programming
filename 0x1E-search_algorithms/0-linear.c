#include "search_algos.h"

/**
* linear_search - function to search value in array
* @array: array values to be searched through
* @size: number of elements in array
* @value: searching for this in array
*
* Return: the first index where value is located
* or -1 if  value not in array or array is NULL
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int value_found = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
			value_found = 1;
			break;
		}
	}
	if (value_found == 0)
	{
		return (-1);
	}
	return (0);
}
