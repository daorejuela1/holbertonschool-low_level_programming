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
	unsigned int i = 0, n = 0;
	char *array;

	if (str == NULL)
		return (NULL);
	if (*str == 0)
		return (NULL);
	while (str[n])
		n++;
	array = (char *)malloc((n + 2) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < n + 2; i++)
		array[i] = 0;
	for (i = 0; i < n + 2; i++)
		array[i] = str[i];
	return (array);
}
