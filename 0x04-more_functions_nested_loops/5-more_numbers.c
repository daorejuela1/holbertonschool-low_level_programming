#include "holberton.h"
/**
 *more_numbers - multiplies two values
 *Return: None
 */
void more_numbers(void)
{
	int repetitions, value;

	for (repetitions = 0; repetitions <= 9; repetitions++)
	{
		for (value = 0; value <= 14; value++)
		{
			if (value > 9)
				_putchar((value / 10) + '0');
			_putchar((value % 10) + '0');
		}
		_putchar('\n');
	}
}
