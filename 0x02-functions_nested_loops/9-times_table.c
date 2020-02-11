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
			if ((number != 0) && (result >= 10))
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if ((number != 0) && (result < 10))
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(result + '0');
			}
			if (number == 9)
				_putchar('\n');
			else
				_putchar(',');

		}
	}
}
