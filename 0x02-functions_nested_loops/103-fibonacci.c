#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int backup, i, acumulator = 0;
	unsigned int memory = 1, fibo = 2;

	acumulator = acumulator + 2;
	for (i = 0; i < 48; i++)
	{
		backup = fibo;
		fibo = fibo + memory;
		memory = backup;
		if (fibo <= 4000000)
			if (fibo % 2 == 0)
				acumulator = acumulator + fibo;
	}
	printf("%u\n", acumulator);
	return (0);
}
