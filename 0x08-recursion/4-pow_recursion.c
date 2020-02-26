#include "holberton.h"
#include <stdio.h>
/**
 *_pow_recursion - find the pow of x,y  without using loops
 *@x: base number
 *@y: power
 *Return:  of input string
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
