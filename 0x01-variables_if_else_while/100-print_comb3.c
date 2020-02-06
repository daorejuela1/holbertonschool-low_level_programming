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
	int y;
	int counter = 0;

	for (x = 0; x < 10; x++)
	{
		counter++;

		for (y = 0; y < 10; y++)
		{
			if (y < counter)
			{
				continue;
			}
			else
			{
				putchar(48 + x);
				putchar(48 + y);
				if (x != 8 || y != 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
