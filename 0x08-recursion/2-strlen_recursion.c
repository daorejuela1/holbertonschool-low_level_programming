#include "holberton.h"
#include <stdio.h>
int my_function(char *s, int a);
/**
 *_strlen_recursion - find the lenght of the string without using loops
 *@s: string to print
 *Return: lenght of input string
 *
 */
int _strlen_recursion(char *s)
{
	int a = 0, result;

	if (*s)
	{
		result = my_function(s, a);
	}
	else
	{
		return (0);
	}
	return (result);
}


/**
 *my_function - find the lenght of the string without using loops
 *@s: strin to print
 *@a: letter count
 *Return: lenght of input string
 *
 */
int my_function(char *s, int a)
{
	if (*(s) != 0)
		return (my_function(s + 1, a + 1));
	return (a);
}
