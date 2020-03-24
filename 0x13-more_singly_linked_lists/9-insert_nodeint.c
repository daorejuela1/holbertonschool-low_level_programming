#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 *@head: pointer to the first elements of the list
 *@idx: index in which you want to add the new value
 *@n: value of the new element
 *Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *previous, *origin;

	origin = *head;
	for (i = 0; i < idx; i++)
	{
		previous = *head;
		if (head == NULL)
			return (NULL);
		*head = (*head)->next;
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = previous;
	(*head)->next = new_node;
	*head = origin;
	return (new_node);
}
