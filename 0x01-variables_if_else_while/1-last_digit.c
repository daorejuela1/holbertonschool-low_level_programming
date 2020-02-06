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
	int n;
	int div;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	div = n % 10;
	if (div > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, div);
	else if (div == 0)
		printf("Last digit of %d is %d and is 0\n", n, div);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, div);

	return (0);
}
