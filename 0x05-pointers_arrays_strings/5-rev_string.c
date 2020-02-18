#include <stdio.h>
#include <stdlib.h>
/**
 *rev_string - reverse string
 *@s: string to reverse
 *Return: nothing
 */
void rev_string(char *s)
{
	int counter = 0;
	int i;
	char *backup = malloc(sizeof(s));

	while (*(s + counter) != 0)
	{
		backup[counter] = '0';
		counter++;
	}
	for (i = counter - 1; i >= 0; i--)
		*(backup + i) = *(s + counter - 1 - i);
	for (i = 0; i <= counter - 1; i++)
		*(s + i) = *(backup + i);
}
