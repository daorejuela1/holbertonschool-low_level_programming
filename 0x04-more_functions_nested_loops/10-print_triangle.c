#include "holberton.h"
/**
 *print_triangle - print triangle of size
 *@size: triangle size
 *Return: None
 */
void print_triangle(int size)
{
	int height, width;

	for (height = 0; height < size; height++)
	{
		for (width = 0; width < size; width++)
		{
			if (width < size - height - 1)
				_putchar(' ');
			else
				_putchar('#');
		}
		if (height != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
