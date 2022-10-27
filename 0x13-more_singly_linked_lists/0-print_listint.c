#include "lists.h"

/**
* print_listint - prints all elements of list
* @h: header to first node in list
*
* Return: 0
*/
size_t print_listint(const listint_t *h)
{
	int count;

	if (h == NULL)
	{
		return (1);
	}
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
