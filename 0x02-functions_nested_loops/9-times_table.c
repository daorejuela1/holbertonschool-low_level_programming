#include "holberton.h"

/**
 * times_table - writes the table using _putchar
 *
 * Return: Nothing.
 *
 */
void times_table(void)
{
	int table_number, number, result;

	for (table_number = 0; table_number < 10; table_number++)
	{
		for (number = 0; number < 10; number++)
		{
			result = number * table_number;
			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar((number * table_number) + '0');
			}
			if ((number != 9) && (result < 10))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((number != 9) && (result >= 10))
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
