#include <stdlib.h>
#include "3-calc.h"
/**
 *main - console calculator using pointer to functions
 *@argc: quantity of arguments
 *@argv: data of arguments
 *Return: Execution status
 */
int main(int argc, char ** argv)
{
	int a, b, result;
	int (*pointer_to_operator)(int, int);
	void (*pointer_to_function)(char *s);

	if (argc - 1 != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	*pointer_to_function = get_op_func;
	address = *(pointer_to_function)("+");
	printf("%p\n", address);
	pointer_to = &get_op_func;
	result = (*pointer_to)(a,b);
	printf("%d\n", result);
}
