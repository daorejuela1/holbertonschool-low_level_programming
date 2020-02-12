#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int backup, i;
	long unsigned int memory = 1, fibo = 2;

	printf("1, ");
	printf("2, ");
	for (i = 0; i < 50; i++)
	{
		backup = fibo;
		fibo = fibo + memory;
		memory = backup;
		printf("%lu, ", fibo);
	}
	printf("\n");
	return (0);
}
