#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - creates a duplicate of a string
 *@str: string to copy
 *
 *Return: duplicated string
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *array;

	if (*str == 0)
		return (NULL);
	while (str[i])
		i++;
	array = (char *)calloc((i + 1), sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		array[i] = str[i];
	return (array);
}
