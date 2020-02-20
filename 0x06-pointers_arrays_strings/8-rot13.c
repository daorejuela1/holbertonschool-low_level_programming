#include "holberton.h"
#include <stdio.h>
/**
  *rot13 - transform string into rot 13 rep
  *@s: string
  *
  *Return: rot string
  */
char *rot13(char *s)
{
	int i, counter = 0;
	char *original_letter = "abcdefghijklmnopqrstuvwxyz";
	char *rot_replacement = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != 0; i++)
	{
		counter = 0;
		while (original_letter[counter] != 0)
		{
			if (s[i] == original_letter[counter])
			{
				s[i] = rot_replacement[counter];
				break;
			}
			counter++;
		}
	}
	return (s);
}
