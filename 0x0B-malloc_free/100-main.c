#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i]; ++i)
    {
        printf("%s\n", tab[i]);
	printf("La memoria ocupada es %lu\n", strlen(tab[i]));
	printf("la longitud de i es:%d\n", i);
    }
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("I am not giving up on my dreams");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
