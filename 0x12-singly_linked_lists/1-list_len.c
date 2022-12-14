#include "lists.h"

/**
* list_len - returns the number of elements in the list
* @h: pointer to first node of list
*
* Return: count ,the number of elements in the list
*/
size_t list_len(const list_t *h)
{
	int elements;

	elements = 0;
	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
