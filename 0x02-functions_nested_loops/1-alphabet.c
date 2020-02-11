#include "holberton.h"
/**
 * print_alphabet - writes the alphabet using _putchar
 *
 * Return: Nothing.
 *
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	for (; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
