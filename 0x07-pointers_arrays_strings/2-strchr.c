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
	unsigned int i, n = 0;

	while (s[n] != 0)
		n++;
	pointer_to_s = &s;
	for (i = 0; i < n; i++)
	{
		if (*(*pointer_to_s + i) == c)
			break;
		else if (*(*pointer_to_s + n - 1) != c)
			return (NULL);
	}
	return (*pointer_to_s + i);
}
