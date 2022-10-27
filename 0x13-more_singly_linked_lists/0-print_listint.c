#include "lists.h"

/**
* print_listint - prints all elements of list
* @h: header to first node in list
*
* Return: elements count if list not empty, 0 otherwise
*/
size_t print_listint(const listint_t *h)
{
	int count;

	if (h == NULL)
	{
		return (0);
	}
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
