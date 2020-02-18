#include "holberton.h"
/**
 *puts_half - prints half of the input string
 *@str: input string
 *Returns: None
 */
void puts_half(char *str)
{
	int counter = 0, total_counter, i;

	while (*(str + counter) != 0)
	{
		counter++;
	}
	counter--;
	if (counter % 2 == 0)
	{
		total_counter = counter / 2;
	}
	else
	{
		total_counter = (counter - 1) / 2;
	}
	for (i = total_counter + 1; i <= counter; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
