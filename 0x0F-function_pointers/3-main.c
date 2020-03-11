#include <stdlib.h>
#include "3-calc.h"
/**
 *main - console calculator using pointer to functions
 *@argc: quantity of arguments
 *@argv: data of arguments
 *Return: Execution status
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*pointer_to_function)(int, int);

	if (argc - 1 != 3)
	{
		printf("Error\n %d", argc);
		exit(98);
	}
	pointer_to_function = get_op_func(argv[2]);
	if (pointer_to_function == NULL)
		return (0);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = (*pointer_to_function)(a, b);
	printf("%d\n", result);
	return (0);
}
