#include "lists.h"
/**
 *sum_listint - returns sum of elements in a int list
 *@head: pointer to the first elements of the list
 *Return: sum of elements
 */
int sum_listint(listint_t *head)
{
	unsigned int acum = 0;

	while (head != NULL)
	{
		acum = acum + head->n;
		head = head->next;
	}
	return (acum);
}
