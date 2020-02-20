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
	char *or_letter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot_replace = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != 0; i++)
	{
		counter = 0;
		while (or_letter[counter] != 0)
		{
			if (s[i] == or_letter[counter])
			{
				s[i] = rot_replace[counter];
				break;
			}
			counter++;
		}
	}
	return (s);
}
