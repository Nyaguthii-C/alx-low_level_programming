#include "lists.h"

/**
* add_nodeint_end - adds a node at the end of a linked list
* @n: ...
* @head: pointer to ..pointer
* Return: whatever is returned
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nptr;
	listint_t *temp;

	temp = *head;
	nptr = malloc(sizeof(listint_t));
	if (head == NULL)
	{
		return (NULL);
	}
	if (nptr == NULL)
	{
		return (NULL);
	}
	nptr->n = n;
	nptr->next = NULL;
	if (*head == NULL)
	{
		*head = nptr;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = nptr;
	return (nptr);
}
