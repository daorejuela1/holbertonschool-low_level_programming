#include <stdlib.h>
/**
 *_calloc - using calloc with malloc
 *@nmemb: number of entries
 *@size: bytes of the entri
 *Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	if (size <= 0 || nmemb <= 0)
		return (NULL);
	pointer = malloc(size * nmemb);
	return (pointer);
}
