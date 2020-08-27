#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
	0, 1, 1, 1, 1, 1, 1, 1, 2, 3, 3, 4, 5, 5, 5, 5, 6, 6, 6, 6, 6, 8, 9, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 1, advanced_binary(array, size, 1));
    printf("Found %d at index: %d\n\n", 9, advanced_binary(array, size, 9));
    printf("Found %d at index: %d\n", 999, advanced_binary(array, size, 999));
    return (EXIT_SUCCESS);
}
