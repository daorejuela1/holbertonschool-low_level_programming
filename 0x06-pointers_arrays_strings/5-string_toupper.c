#include "holberton.h"
/**
  *string_toupper - merge  two strings
  *@s: string
  *
  *Return: number with difference
  */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		s[i] = s[i];
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
