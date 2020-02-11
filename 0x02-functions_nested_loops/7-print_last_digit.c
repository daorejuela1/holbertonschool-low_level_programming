#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - prints_last_digit
 * @n: number to evalue
 * Return: last digit.
 *
 */
int print_last_digit(int n)
{
	int result;

	if (n < 0)
		n = n * -1;
	result = n % 10;
	_putchar(result + '0');
	return (result);
}
