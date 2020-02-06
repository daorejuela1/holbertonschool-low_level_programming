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
	int z;
	int counter = 0;
	int outer_counter = 0;

	for (x = 0; x < 10; x++)
	{
		outer_counter++;
		counter = 0;
		for (y = 0; y < 10; y++)
		{
			counter++;
			if (y < outer_counter)
				continue;
			else
			{
				for (z = 0; z < 10; z++)
				{
					if (z < counter)
					{
						continue;
					}
					else
					{
						putchar(48 + x);
						putchar(48 + y);
						putchar(48 + z);
						if (x != 7 || y != 8 || z != 9)
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
