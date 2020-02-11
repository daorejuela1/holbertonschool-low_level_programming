#include "holberton.h"
#include <stdio.h>
/**
 * print_sign - checks if a number is positive, negative or zero
 * @n: number to evalue
 * Return: 1 if is positive, 0 if is zero, -1 if is negative.
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
