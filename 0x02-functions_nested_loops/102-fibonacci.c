#include <stdio.h>
#include <gmp.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	mpz_t memory, backup, fibo;

	mpz_init_set_str(fibo, "2", 10);
	mpz_init_set_str(memory, "1", 10);
	mpz_init(backup);
	printf("1, ");
	printf("2, ");
	for (i = 0; i < 48; i++)
	{
		mpz_set(backup, fibo);
		mpz_add(fibo, fibo, memory);
		mpz_set(memory, backup);
		if (i != 47)
			gmp_printf("%Zd, ", fibo);
		else
			gmp_printf("%Zd\n", fibo);
	}
	return (0);
}


