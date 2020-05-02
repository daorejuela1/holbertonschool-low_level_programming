#include "lists.h"
/**
 * free_dlistint - frees a double linked list
 * @head: header of double linked list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	void *tmp;

	while (head->prev != NULL)/*check start of list*/
	{
		head = head->prev;
	}
	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
