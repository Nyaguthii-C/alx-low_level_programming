#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements of list.
* @list_t - type of list
* @h - pointer 
*
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t elements
	elements = 0;	

	while (h != NULL)
	{
		if (h -> str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else (h -> str == NULL)
		{
			printf("[%d] %s\n", h -> len, h -> str)
		}
		h = h -> next;
		elements++;
	}
	return (elements)
)
