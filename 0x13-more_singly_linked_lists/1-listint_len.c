#include "lists.h"

/**
* listint_len - returns the number of elements in list
* @h: pointer to first node of list
*
* Return: count if list not empty, 0 otherwise
*/
size_t listint_len(const listint_t *h)
{
	int count;

	if (h == NULL)
	{
		return (0);
	}
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
