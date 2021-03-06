#include "holberton.h"
#include <stdio.h>
int my_function(char *s, int a);
int checkvalues(char *s, char *b);
/**
 *is_palindrome - find the lenght of the string without u *sing loops
 *@s: string to print
 *Return: lenght of input string
 *
 */
int is_palindrome(char *s)
{
	int max = 0, result = 0;
	char *b = s;

	if (*s)
		max = my_function(s, max);
	else
		return (1);
	result = checkvalues(s, b + max - 1);
	return (result);
}


/**
 *checkvalues - compare initial and end values of stream
 *@s: original string
 *@b: string backwards
 *Return: 1 if is equal 0 if there is any difference
 */
int checkvalues(char *s, char *b)
{
	if (s > b)
		return (1);
	else if (*s != *b)
	{
		return (0);
	}
	else
	{
		return (checkvalues(s + 1, b - 1));
	}
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
		return (my_function(s = s + 1, a + 1));
	return (a);
}
