#include "holberton.h"

/**
 * print_times_table - writes the table using _putchar
 *@n: max table number
 * Return: Nothing.
 *
 */
void print_times_table(int n)
{
	int table_number, number, result;
if (n >= 0 && n <= 15)
{
	for (table_number = 0; table_number <= n; table_number++)
	{
		for (number = 0; number <= n; number++)
		{
			result = number * table_number;
			if ((number != 0) && (result >= 100))
			{
				_putchar(' ');
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if ((number != 0) && (result >= 10))
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if ((number != 0) && (result < 10))
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else
				_putchar(result + '0');
			if (number == n)
				_putchar('\n');
			else
				_putchar(',');
		}
	}
}
}
