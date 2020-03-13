#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/**
 *print_char - prints char character
 *@c: char input
 */
void print_char(char c)
{
	printf("%c", c);
}

/**
 *print_int - prints int character
 *@d: char input
 */
void print_int(int d)
{
	printf("%d", d);
}

/**
 *print_float - prints float character
 *@f: float input
 */
void print_float(float f)
{
	printf("%f", f);
}

/**
 *print_string - prints chain of character
 *@s: String input
 */
void print_string(char *s)
{
	while (s == NULL)
	{
		s = "(nil)";
		break;
	}
	printf("%s", s);
}
/**
 *print_all - prints a character by checking the format
 *@format: string of characters indicating valid formats
 */
void print_all(const char * const format, ...)
{
	int i = 0, unknown_char = 0;
	va_list elements;

	va_start(elements, format);
	if (format)
	{
		while (*(format + i))
		{
			switch (*(format + i))
			{
				case 'c':
					print_char(va_arg(elements, int));
					break;
				case 'i':
					print_int(va_arg(elements, int));
					break;
				case 'f':
					print_float(va_arg(elements, double));
					break;
				case 's':
					print_string(va_arg(elements, char *));
					break;
				default:
					unknown_char = 1;
					break;
			}
			if (*(format + i + 1) != 0 && unknown_char == 0)
				printf(", ");
			i++;
			unknown_char = 0;
		}
	}
	va_end(elements);
	printf("\n");
}
