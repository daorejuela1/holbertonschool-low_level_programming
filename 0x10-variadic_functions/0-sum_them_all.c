#include <stdarg.h>
/**
 *sum_them_all - function tu sum a series of numbers
 *@n: number of data
 *
 *
 *Return: sum of all the inputs
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list elements;

	if (n == 0)
		return (0);
	va_start(elements, n);
	for (i = 0; i < n; i++)
		sum += va_arg(elements, int);
	va_end(elements);
	return (sum);
}
