#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *print_strings - function to print strings
 *@separator: string to be printed between strings
 *@n: quantity of elements
 *Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *my_word;
	va_list words;

	if (separator == NULL)
		separator = "";
	va_start(words, n);
	for (i = 0; i < n; i++)
	{
		my_word = va_arg(words, char *);
		if (my_word == NULL)
			my_word = "(nil)";
		printf("%s", my_word);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(words);
}
