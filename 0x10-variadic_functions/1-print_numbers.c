#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *print_numbers - print the numbers separate by separator.
 *@separator: string use to separate numbers.
 *@n: quantity of numbers.
 *Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	if (n == 0)
		exit(0);
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d%s", va_arg(numbers, int), separator);
		else
			printf("%d\n", va_arg(numbers, int));
	}
	va_end(numbers);
}
