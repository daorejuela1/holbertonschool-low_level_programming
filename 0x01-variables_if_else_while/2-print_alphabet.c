#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 26; x++)
		putchar(97 + x);
	putchar(10);
	return (0);
}
