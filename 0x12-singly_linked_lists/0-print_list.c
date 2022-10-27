#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_list - prints all the elements of list.
* @list_t - name given to structure list_s
* @h:pointer to linked list
*
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
