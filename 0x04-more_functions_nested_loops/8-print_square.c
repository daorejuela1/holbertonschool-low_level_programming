#include "holberton.h"
/**
 *print_square - print square of size
 *@size: square size
 *Return: None
 */
void print_square(int size)
{
	int height, width;

	for (height = 0; height < size; height++)
	{
		for (width = 0; width < size; width++)
		{
			_putchar('#');
		}
		if (height != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
