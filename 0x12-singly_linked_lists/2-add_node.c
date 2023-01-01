#include "lists.h"

/**
* add_node - adds a node to the beginning of list
* @head: pointer to first node of list
* @str: data for the node
*
* Return: adress to new element or NULL if fail
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	char *strcp;
	size_t charcnt;
	
	strcp = strdup(str);
	ptr = (list_t *) malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strcp;
	for (charcnt = 0; str[charcnt]; charcnt++)
		;
	ptr->len = charcnt;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
