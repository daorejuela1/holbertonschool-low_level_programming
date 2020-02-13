#include <stdio.h>

/**
 * main - prints the fizz buss test.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int numbers = 2, result;
	unsigned long int value = 612852475143;

	while (value != 1)
	{
		numbers++;
		result = value;
		if (value % numbers == 0)
		{
			value = value / numbers;
		}
	}
	printf("%lu\n", result);
	return (0);
}
