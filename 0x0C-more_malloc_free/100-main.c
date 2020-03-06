#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;
    unsigned int old, new;

	old = 5;
	new = 10;
    p = malloc(sizeof(char) * old);
    p = _realloc(p, sizeof(char) * old, sizeof(char) * new);
    i = 0;
    if (p == NULL)
    {
	printf("NULL\n");
    	return (1);
    }
    while (i < (int) new)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, new);
    free(p);
    return (0);
}
