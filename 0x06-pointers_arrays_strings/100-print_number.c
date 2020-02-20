#include "holberton.h"
/**
 *print_number - prints integer number by using char
 *
 *@n: number to be printed
 *
 *Return: Nothing
 */
void print_number(int n)
{
	unsigned int value;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	value = n;
	if (value / 10 > 0)
	{
		print_number(value / 10);
	}
		_putchar(value % 10 + '0');
}
