#include "lists.h"
/**
 *add_nodeint_end - add new node at the end of list
 *@head: pointer to the first elements of the list
 *@n: value of the element.
 *Return: Quantity of nodes in the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list, *clone;

	if (head == NULL)
		return (NULL);
	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);
	new_list->n = n;
	new_list->next = NULL;
	if (*head == NULL)
	{
		*head = new_list;
		return (new_list);
	}
	else
	{
		clone = *head;
		while ((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
	}
	(*head)->next = new_list;
	*head = clone;
	return (new_list);
}
