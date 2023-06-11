#include "lists.h"

/**
* pop_listint - a function that deletes the head node of a linked list,
* and returns the head node’s data (n)
* @head: node to be deleted
*
* Return: head node data, head->n or 0 if linked list empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val_head;

	if (head == NULL)
	{
		return (0);
	}
	if (*head == NULL)
	{
		return (0);
	}
	/* set variable to hold data in head*/
	val_head = (*head)->n;
	/* temp node set to start of list*/
	temp = *head;
	/* if more than one node, head points to following node*/
	if (temp->next != NULL)
	{
		*head = temp->next;
	}
	else
	{
		*head = NULL;
	}
	free(temp);
	return (val_head);
}
