#include "holberton.h"
#include <stdio.h>
/**
 *print_number - prinst an int number by using putchar
 *@n: input number
 *Return: None
 */
int cal_digits(int n);
void print_number(int n)
{
	int i = 0;
	int num_digits;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	num_digits = cal_digits(n);
	for (i = num_digits; i >= 1; i /= 10)
	{
		_putchar((n / i) % 10 + '0');
		if (i == 1)
			break;
	}
}

/**
 *cal_digits - prinst an int number by using putchar
 *@n: input number
 *Return: None
 */
int cal_digits(int n)
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
	else if (n >= 0)
		return (1);
	return (0);
}
