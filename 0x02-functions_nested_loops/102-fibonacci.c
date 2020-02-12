#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int backup, i;
	unsigned long int memory = 1, fibo = 2;

	printf("1, ");
	printf("2, ");
	for (i = 0; i < 48; i++)
	{
		backup = fibo;
		fibo = fibo + memory;
		memory = backup;
		if (i != 47)
			printf("%lu, ", fibo);
		else
			printf("%lu", fibo);
	}
	printf("\n");
	return (0);
}
