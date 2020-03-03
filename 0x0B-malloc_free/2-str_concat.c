#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - cat two arrays into one matrix
 *@s1: first part of the array
 *@s2: second part of the array
 *Return: concat string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int first = 0, second = 0, i = 0, r = 0;
	char *array;

	if (s1 == NULL)
		first = 0;
	else
		while (s1[first])
			first++;
	if (s2 == NULL)
		second = 0;
	else
		while (s2[second])
			second++;
	array = (char *)malloc((first + second + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < first; i++)
		array[i] = s1[i];
	for (r = 0; r < second; r++)
		array[r + i] = s2[r];
	array[first + second] = 0;
	return (array);
}
