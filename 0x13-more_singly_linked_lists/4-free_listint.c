#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: pointer to list
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	if (head != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
