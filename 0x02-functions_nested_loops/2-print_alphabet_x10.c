#include "holberton.h"

/**
 * print_alphabet_x10 - writes the alphabet using _putchar
 *
 * Return: Nothing.
 *
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		for (; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
