#include "lists.h"
/**
 *get_nodeint_at_index - returns nth element of a list
 *@head: pointer to the first elements of the list
 *@index: position of the element that wants to be returned
 *Return: Address of the element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index ; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
