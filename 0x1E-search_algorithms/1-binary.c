#include "search_algos.h"
#include "math.h"

/**
* binary_search - searches for value in array
* @array: array values to be searched through
* @size: number of elements in array
* @value: searching for this in array
*
* Return: the index where value is located
* or -1 if value is not present in array or if array is NULL
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left;
	size_t right;
	size_t mid;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	/* print array searched */
	for (left = 0, right = size - 1; right >= left;)
	{
		mid = floor((left + right) / 2);
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ",array[i]);
		}
		printf("%d\n",array[i]);
		/*binary search*/
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
