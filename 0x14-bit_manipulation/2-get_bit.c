#include "holberton.h"
#define REALONG unsigned int
#define UREALONG unsigned long int
int recursive_helper(UREALONG n, REALONG index, REALONG counter);
int get_bitsnumber(UREALONG n, REALONG counter);
/**
 *get_bit - gets bit in desired index
 *@n: input number
 *@index: index of binary number
 *Return: Binary value at selected index
 */
int get_bit(UREALONG n, unsigned int index)
{
	unsigned int counter = 0, bitnum = 0;
	int result = 0;

	if (n == 0)
		bitnum++;
	bitnum = get_bitsnumber(n, bitnum);
	bitnum = bitnum - 1;
	if (n == 0 && index == 0)
		return (result);
	if (index > bitnum)
		return (-1);
	result = recursive_helper(n, index, counter);
	return (result);
}

/**
 *recursive_helper - prints decimal number in binary
 *@n: input number
 *@index: index of binary search
 *@counter: counter to find index
 *Return: Nothing but prints in stdout the binary series
 */
int recursive_helper(UREALONG n, REALONG index, REALONG counter)
{
	int result;

	if (counter == index)
		return (n - 2 * (n >> 1));
	result = recursive_helper(n >> 1, index, ++counter);
	return (result);
}

/**
 *get_bitsnumber - gets the number of bits to represent a number
 *@n: input number
 *@counter: counter to find index
 *Return: Nothing but prints in stdout the binary series
 */
int get_bitsnumber(UREALONG n, REALONG counter)
{
	if (n == 0)
	{
		return (counter);
	}
	return (get_bitsnumber(n >> 1, counter + 1));
}
