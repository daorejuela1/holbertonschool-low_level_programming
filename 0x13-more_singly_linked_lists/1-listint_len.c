#include "lists.h"
/**
 *listint_len - prints the number of elements in a list
 *@h: pointer to the first elements of the list
 *Return: Quantity of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
