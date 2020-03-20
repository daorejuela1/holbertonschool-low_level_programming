 #include "lists.h"
/**
 *free_list - eliminate memory leaks while using lists
 *@head: pointer to the the list
  *Return: Nothing
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head);
	}
}
