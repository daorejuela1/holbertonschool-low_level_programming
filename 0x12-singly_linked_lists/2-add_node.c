#include "lists.h"
/**
 *add_node - adds new node at end of list
 *@head: pointer to the pointer of the list
 *@str - str data to add
 *Return: pointer to the new element of list
 */
list_t *add_node(list_t **head, const char *str)
{
	int len_str = 0;
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	char *final = strdup(str);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (final[len_str])
		len_str++;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->str = final;
		new_node->len = len_str;
		new_node->next = NULL;
	}
	else
	{
		new_node->str = final;
		new_node->len = len_str;
		new_node->next = (*head)->next;
	}		
       	free(final);
	return (new_node);
}
