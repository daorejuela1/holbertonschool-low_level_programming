#include <stdio.h>
/**
 *_strchr -  sets memory values from *s to n quantity
 *@s: initial address
 *@c: value
 *Return: NULL if character not found, else; pointer to the first ocurrence of
 *character
 */
unsigned int _strspn(char *s, char *accept)
{
	char **pointer_to_s, **pointer_to_accept;
	unsigned int letter, search, n = 0, m = 0, result = 0;

	while (s[n] != 0)
		n++;
	while (accept[m] != 0)
		m++;
	pointer_to_s = &s;
	pointer_to_accept = &accept;
	for (letter = 0; letter < n; letter++)
	{
		for (search = 0; search < n; search++)
		{
			if (*(*pointer_to_s + letter) == *(*(pointer_to_accept + search)))
					result++;
			else
				continue;
		}
	}
	return (result);
}
