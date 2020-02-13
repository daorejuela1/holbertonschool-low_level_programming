#include <stdio.h>
void print_large_number(int i, unsigned long int a1, unsigned long int a2);
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int backup, a1, a2, b1, b2, backup1, backup2;
	unsigned long int memory = 1, fibo = 2;
	int i;

	printf("1, ");
	printf("2, ");
	for (i = 0; i < 96; i++)
	{
		if (i < 90)
		{
			backup = fibo;
			fibo = fibo + memory;
			memory = backup;
			printf("%lu, ", fibo);
		}
		if (i == 90)
		{
			a1 = fibo / 10000000000;
			a2 = fibo % 10000000000;
			b1 = memory / 10000000000;
			b2 = memory % 10000000000;
		}
		if (i >= 90)
		{
			backup1 = a1;
			backup2 = a2;
			a1 = a1 + b1;
			a2 = a2 + b2;
			if (a2 > 10000000000)
			{
				a1 = a1 + 1;
				a2 = a2 % 10000000000;
			}
			print_large_number(i, a1, a2);
			b1 = backup1;
			b2 = backup2;
		}

	}
	printf("\n");
	return (0);
}

/**
 * print_large_number - check the code for Holberton School students.
 *@i: iteration
 *@a1: first part
 *@a2: second part
 * Return: Always 0.
 */
void print_large_number(int i, unsigned long int a1, unsigned long int a2)
{
	if (i != 95)
		printf("%lu%lu, ", a1, a2);
	else
		printf("%lu%lu", a1, a2);
}
