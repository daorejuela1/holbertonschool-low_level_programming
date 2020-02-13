#include "holberton.h"
/**
 *print_diagonal - print n lines
 *@n: number of lines
 *Return: None
 */
void print_diagonal(int n)
{
	int repetitions, spaces;

	for (repetitions = 0; repetitions < n; repetitions++)
	{
		for(spaces = 0; spaces < repetitions; spaces ++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (repetitions != n-1)
			_putchar('\n');
	}
	_putchar('\n');
}
