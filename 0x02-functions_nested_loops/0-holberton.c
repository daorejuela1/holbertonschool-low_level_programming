#include "holberton.h"
/**
 * main - writes the characters Holberton to stdout
 * Return: always 0.
 */
int main(void)
{
	int i;
	char word[] = "Holberton\n";

	for (i  = 0; i < 10; i++)
		_putchar(word[i]);
	return (0);
}
