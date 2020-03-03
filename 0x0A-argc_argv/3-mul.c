#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two numbers
 *@argc: Quantity of arguments
 *@argv: Arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
}
