#include "lists.h"
/**
 *print_listint - prints a list that contains ints
 *@h: pointer to the first elements of the list
 *Return: Quantity of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
