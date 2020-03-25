#include "lists.h"
/**
 *find_listint_loop - find loop in a list that contains ints
 *@head: pointer to the first elements of the list
 *Return: Address of the repeated element
 */
listint_t *find_listint_loop(listint_t *head)
{
	int i = 0;
	const listint_t *temp;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++)
	{
		temp = head;
		head = head->next;
		if (temp <= head)
		{
			i++;
			break;
		}

	}
	return ((void *)head);
}
