#include <stdlib.h>
/**
 *_calloc - using calloc with malloc
 *@nmemb: number of entries
 *@size: bytes of the entri
 *Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (size <= 0 || nmemb <= 0)
		return (NULL);
	pointer = malloc(size * nmemb);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		pointer[i] = 0;
	return ((void *)pointer);
}
