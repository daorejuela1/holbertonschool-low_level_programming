#include <stdio.h>
/**
 *set_string -  pass value of s to to
 *@s: original string
 *@to: dest 
 *Return: Nothing
 *
 */
void set_string(char **s, char *to)
{
	int i;

	for (i = 0; *s[i] != 0; i++)
	{
		printf("ronda %c\n",*s[0]);
	}
}
