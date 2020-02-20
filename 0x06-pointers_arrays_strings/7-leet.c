#include "holberton.h"
/**
  *leet - transform string into leet rep
  *@s: string
  *
  *Return: leep string
  */
char *leet(char *s)
{
	int i, counter = 0;
	char leep_letters[] = {'a', 'e', 'o', 't', 'l'};
	char leep_numbers[] = {4, 3, 0, 7, 1};

	for (i = 0; s[i] != 0; i++)
	{
		counter = 0;
		while (leep_letters[counter] != 0)
		{
			if (s[i] == leep_letters[counter] || s[i] == leep_letters[counter] - 32)
			{
				s[i] = leep_numbers[counter] + '0';
			}
			counter++;
		}
	}
	return (s);
}
