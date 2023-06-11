#include "lists.h"

/**
* get_nodeint_at_index -  a function that returns nth node of a linked list
* @head: pointer to node at start of list
* @index: index of the node to return, starting at 0
*
* Return: the nth node or NULL if it does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int pos = 0;
	/* traverse through the list via next node address in next */
	while(head->next != NULL)
	{
		if (pos == index)
		{
			return (head);
		}
		head = head->next;
		pos++;
	}
	/* instance when no address for next node */
	return (NULL);
}
