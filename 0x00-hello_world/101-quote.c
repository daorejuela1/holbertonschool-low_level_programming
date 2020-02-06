/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <unistd.h>
int main(void)
{
	char my_message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, my_message, 59);
	return (1);
}
