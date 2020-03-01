#include <stdio.h>
#include <stdlib.h>
/**
 *main - add two numbers
 *@argc: Quantity of arguments
 *@argv: Arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int result = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
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
