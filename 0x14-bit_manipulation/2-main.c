#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(1, 0);
    printf("%d\n", n);
    n = get_bit(8, 3);
    printf("%d\n", n);
    return (0);
}