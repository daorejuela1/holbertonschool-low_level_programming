#include <stdio.h>
#include <stdlib.h>
/**
 *strdup - creates a duplicate of a string
 *@str: string to copy
 *
 *Return: duplicated string
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *array;

	if (*str == 0)
		return (NULL);
	array = (char *)malloc(sizeof(str));
	if (array == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		array[i] = str[i];
	return (array);
}
