#include "holberton.h"
#include <stdio.h>
/**
 *print_number - prinst an int number by using putchar
 *@n: input number
 *Return: None
 */
unsigned int cal_digits(unsigned int n);
void print_number(int n)
{
	int i;
	unsigned int handler;
	int num_digits;

	handler = n;
	if (n < 0)
	{
		handler = handler * -1;
		_putchar('-');
	}
	num_digits = cal_digits(handler);
	for (i = num_digits; i >= 1; i /= 10)
	{
		_putchar((handler / i) % 10 + '0');
		if (i == 1)
			break;
	}
}

/**
 *cal_digits - prinst an int number by using putchar
 *@n: input number
 *Return: None
 */
unsigned int cal_digits(unsigned int n)
{
	if (n > 999999999)
		return (1000000000);
	else if (n > 99999999)
		return (100000000);
	else if (n > 9999999)
		return (10000000);
	else if (n > 999999)
		return (1000000);
	else if (n > 99999)
		return (100000);
	else if (n > 9999)
		return (10000);
	else if (n > 999)
		return (1000);
	else if (n > 99)
		return (100);
	else if (n > 9)
		return (10);
	else
		return (1);
}
