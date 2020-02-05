/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	char ima_char;
	int ima_int;
	long int ima_longint;
	long long int ima_longlongint;
	float ima_float;

	printf("Size of a char: %lu bytes(s)\n", sizeof(ima_char));
	printf("Size of an int: %lu bytes(s)\n", sizeof(ima_int));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(ima_longint));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(ima_longlongint));
	printf("Size of a float: %lu bytes(s)\n", sizeof(ima_float));
	return (0);
}
