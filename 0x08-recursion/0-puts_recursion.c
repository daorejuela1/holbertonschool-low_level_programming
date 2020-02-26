#include "holberton.h"
#include <stdio.h>
/**
 *_puts_recursion - command puts with recursion instead of looping
 *@s: string to print
 *Return: nothing
 *
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*(s + 1) != 0)
	{
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
