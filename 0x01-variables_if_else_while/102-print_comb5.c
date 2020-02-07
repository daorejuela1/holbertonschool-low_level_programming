#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, z2, y, z, counter = 0, aux_counter, master = -1;

	for (x = 0; x < 11; x++)
	{
		master = master + 1;
		counter = 0;
		for (y = 0; y < 10; y++)
		{
			counter++;
			aux_counter = counter;
			for (z = 0; z < 10; z++)
			{		
				if (z >= master)
				{
				for (z2 = 0; z2 < 10; z2++)
				{
				if (z2 >= aux_counter)
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
				if (z2 == 9)
					aux_counter = 0;
				}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
