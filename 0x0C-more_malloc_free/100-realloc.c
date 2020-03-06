#include <stdlib.h>
/**
 *_realloc - array with the range of integer
 *@ptr: array
 *@old_size: old array sizee
 *@new_size: new array size
 *Return: int array with min to max
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array;
	unsigned int minimum, i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == 0 && ptr == NULL)
	{
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	array = malloc(new_size * sizeof(char));
	if (array == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		minimum = old_size;
	else
		minimum = new_size;
	for (i = 0; i < minimum; i++)
	{
		if (((char *)ptr + i) != NULL)
			array[i] = *((char *)ptr + i);
	}
	free(ptr);
	return ((void *)array);
}
