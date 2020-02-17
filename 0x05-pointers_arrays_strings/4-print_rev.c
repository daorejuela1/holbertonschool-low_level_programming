#include "holberton.h"
/**
 *print_rev - prints string in reverse
 *@s: input string
 *
 *Return: none
 */
void print_rev(char *s)
{
	int counter = 0, i;

	while (*(s + counter) != 0)
		counter++;
	for (i = counter - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
