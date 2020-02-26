#include "holberton.h"
#include <stdio.h>
/**
 *factorial - calculate the factorial of a number
 *@n: number to calculate the factorial
 *Return: factorial
 *
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
