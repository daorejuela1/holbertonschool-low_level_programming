#include "lists.h"
/**
 *get_nodeint_at_index - free list  and sets head to null
 *@head: pointer to the first elements of the list
 *Return: Quantity of nodes in the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	void *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
