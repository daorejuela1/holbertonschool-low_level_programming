#include "holberton.h"
#include <stdio.h>
int my_function(int n, int a, int counter);
/**
 *is_prime_number - find if the number is prime
 *@n: base number
 *Return: 1 if number is 0 in other case
 *
 */
int is_prime_number(int n)
{
	int a = 1, counter = 0;
	int result;

	if (n < 0)
		return (0);
	else if (n == 0)
		return (0);
	result = my_function(n, a, counter);
	if (result == 2)
		result = 1;
	else
		result = 0;
	return (result);
}

/**
 *my_function - find the sqrt of n without using loops
 *@n: base number
 *@a: iterator
 *@counter: division number
 *Return:  of input string
 */
int my_function(int n, int a, int counter)
{
	if (n % a == 0)
		counter++;
	else if (n < a)
		return (counter);
	return (my_function(n, a + 1, counter));
}
