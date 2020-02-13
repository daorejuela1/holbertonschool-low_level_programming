#include "holberton.h"
/**
 *print_number - prinst an int number by using putchar
 *@n: input number
 *Return: None
 */
void print_number(int n)
{
	int number = n;

	if (number < 0)
	{
		number = number * -1;
		_putchar('-');
	}
	if (number > 999)
	{
		_putchar(number / 1000 % 10 + '0');
		_putchar(number / 100 % 10 + '0');
		_putchar(number / 10 % 10 + '0');
		_putchar(number % 10 + '0');
	}
	else if (number > 99)
	{
		_putchar(number / 100 % 10 + '0');
		_putchar(number / 10 % 10 + '0');
		_putchar(number % 10 + '0');
	}
	else if (number > 9)
	{
		_putchar(number / 10 % 10 + '0');
		_putchar(number % 10 + '0');
	}
	else
	{
		_putchar(number % 10 + '0');
	}
}
