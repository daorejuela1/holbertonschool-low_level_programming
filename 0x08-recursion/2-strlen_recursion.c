#include "holberton.h"
#include <stdio.h>
/**
 *_strlen_recursion - find the lenght of the string without using loops
 *@s: string to print
 *Return: lenght of input string
 *
 */
int _strlen_recursion(char *s)
{
	int result = 0;
	if (*(s + 1) != 0)
	{
		 return (result);
	}
	else
	{
		result++;
		return (result);
	}
}
