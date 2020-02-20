#include "holberton.h"
/**
  *cap_string - up first letter of a string
  *@s: string
  *
  *Return: number with difference
  */
char *cap_string(char *s)
{
	int i, counter;
	char separators[] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 1; s[i] != 0; i++)
	{
		counter = 0;
		while (separators[counter] != 0)
		{
			if (s[i - 1] == separators[counter])
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 32;
				}
			}
			else if (i - 1 == 0)
			{
				if (s[i - 1] >= 'a' && s[i - 1] <= 'z')
				{
					s[i - 1] = s[i - 1] - 32;
				}
			}
		counter++;
		}
	}
	return (s);
}
