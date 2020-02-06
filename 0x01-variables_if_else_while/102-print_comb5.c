#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_my_word - Entry point
 * @x: first digit
 * @y: second digit
 * @z: third digit
 * @z2: fourth digit
 *
 * Return: None
 */
void print_my_word(int x, int y, int z, int z2)
{

	putchar(48 + x);
	putchar(48 + y);
	putchar(32);
	putchar(48 + z);
	putchar(48 + z2);
	if (x != 9 || y != 8 || z != 9 || z2 != 9)
	{
		putchar(44);
		putchar(32);
	}
}


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;
	int z2;
	int counter = 0;
	int aux_counter;
	int outer_counter = 0;
	int aux_outer_counter;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			counter++;
			aux_counter = counter;
			if (y == 9)
				counter = 0;
			for (z = 0; z < 10; z++)
			{
				for (z2 = 0; z2 < 10; z2++)
				{
				if (z2 < aux_counter)
				{
					continue;
				}
				print_my_word(x, y, z, z2);
				if (z2 == 9)
					aux_counter = 0;
				}
			}
		}
	}
	putchar(10);
	return (0);
}
