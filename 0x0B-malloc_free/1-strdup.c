#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - creates a duplicate of a string
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
	array = (char *)malloc(strlen(str));
	if (array == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		array[i] = str[i];
	return (array);
}
