#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: pointer to list
*/
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free(head);
	}
}
