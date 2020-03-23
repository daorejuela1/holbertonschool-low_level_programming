#include "lists.h"
/**
 *add_nodeint - add new node at start of list
 *@head: pointer to the first elements of the list
 *@n: value of the element.
 *Return: Quantity of nodes in the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	if (head == NULL)
		return (NULL);
	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);
	new_list->n = n;
	new_list->next = *head;
	*head = new_list;
	return (new_list);
}
