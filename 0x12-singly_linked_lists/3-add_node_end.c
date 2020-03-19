#include "lists.h"
/**
 *add_node_end - adds new node at end of list
 *@head: pointer to the pointer of the list
 *@str - str data to add
 *Return: pointer to the new element of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, len_str = 0;

	if (head == NULL)
		return (NULL);
	char *final = strdup(*head);
	list_t new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (final[len_str])
		len_str++;
	new_node->str = final;
	new_node->len = len_str;
	new_node->next = NULL;
	for (i = 0; head[i]; i++)
	{
		if (head->next == NULL)
		{
			head->next = new_node;
		}
	}
	free (final);
}
