#include "holberton.h"
/**
 *print_line - print n lines
 *@n: number of lines
 *Return: None
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
