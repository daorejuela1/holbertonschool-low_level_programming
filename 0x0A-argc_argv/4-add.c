#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - add two numbers
 *@argc: Quantity of arguments
 *@argv: Arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int result = 0, i;
	char *endptr;

	for (i = 1; i < argc; i++)
	{
		strtol(argv[i], &endptr, 10);
		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
		return (0);
	}
}
