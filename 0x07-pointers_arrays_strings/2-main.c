#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "helpo";
	char *f;

	f = _strchr(s, 'o');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
