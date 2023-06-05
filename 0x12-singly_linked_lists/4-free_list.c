#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer to first node in list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		temp = head->next;/*temporary node points next node in list*/
		free(head->str);/*free data in head node*/
		free(head);/*free the entire node*/
		head = temp;/*point head to next node*/
	}
}
