#include "lists.h"

/**
* add_nodeint - adds a node at the beginning of a list
* @n: data in link node
* @head : pointer to first node in list
* Return: adress to new element or null if fail
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = (listint_t *) malloc(sizeof(listint_t));
	ptr->n = n;
	ptr->next = NULL;

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
