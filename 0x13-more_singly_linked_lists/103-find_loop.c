#include "lists.h"
/**
 *find_listint_loop - find loop in a list that contains ints
 *@head: pointer to the first elements of the list
 *Return: Address of the repeated element
 */
listint_t *find_listint_loop(listint_t *head)
{
	const listint_t *temp;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		if (temp < head)
		{
			break;
		}
	}
	return (head);
}
