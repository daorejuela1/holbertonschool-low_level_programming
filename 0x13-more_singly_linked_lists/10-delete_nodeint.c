#include "lists.h"
/**
 *delete_nodeint_at_index - deletes node at select indx
 *@head: pointer to the first elements of the list
 *@index: index in which you want to del the node
 *Return: 1 if SUCCESS, or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *next_node, *previous, *origin;

	if (head == NULL)
		return (-1);
	origin = *head;
	for (i = 0; i < index; i++)
	{
		if (*head == NULL)
		{
			*head = origin;
			return (-1);
		}
		previous = *head;
		*head = (*head)->next;
	}
	if (*head != NULL)
		{
		next_node = (*head)->next;
		free(*head);
		if (index != 0)
		{
			*head = previous;
			(*head)->next = next_node;
			*head = origin;
		}
		else
		{
			*head = next_node;
		}
		return (1);
		}
	else
		return (-1);
}
