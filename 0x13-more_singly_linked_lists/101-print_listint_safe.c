#include "lists.h"
/**
 *print_listint_safe - prints a list that contains ints
 *@head: pointer to the first elements of the list
 *Return: Quantity of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0, j = 0, k = 0, loop_found = 0;
	const listint_t *array[1000];

	if (head == NULL)
		exit(98);
	for (i = 0; head != NULL; i++)
	{
		if (loop_found == 1)
			break;
		array[k] = head;
		printf("[%p] %d\n",(void *)head ,head->n);
		head = head->next;
		k++;
		for (j = 0; j < k; j++)
		{
			if (array[j] == head)
				loop_found = 1;
		}
	}
	return (i);
}
