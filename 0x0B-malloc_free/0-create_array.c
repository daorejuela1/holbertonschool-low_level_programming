#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - function that allows you to create an array
 *@size: size of the array
 *@c: initial value of all elements of the array
 *
 *Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
