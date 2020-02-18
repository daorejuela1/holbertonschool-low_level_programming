#include "holberton.h"
/**
 *puts2 - prints the characters in a string
 *@str: input string.
 *
 *Return: none
 */
void puts2(char *str)
{
	int counter = 0;

	while (*(str + counter) != 0)
	{
		if (counter % 2 == 0)
		{
			_putchar(str[counter]);
		}
		counter++;
	}
	_putchar('\n');
}
