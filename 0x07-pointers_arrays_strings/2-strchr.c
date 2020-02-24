#include <stdio.h>
/**
 *_strchr -  sets memory values from *s to n quantity
 *@s: initial address
 *@c: value
 *Return: NULL if character not found, else; pointer to the first ocurrence of
 *character
 */
char *_strchr(char *s, char c)
{
	char **pointer_to_s;
	unsigned int i;

	pointer_to_s = &s;
	for (i = 0; s[i] != 0; i++)
	{
		if (*(*pointer_to_s + i) == c)
			return (*pointer_to_s + i);
	}
			return (NULL);
}
