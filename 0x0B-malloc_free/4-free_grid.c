#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - allocate matrix in the form of memory
 *@grid: 2d matrix
 *@height: matrix row
 *Return: None
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
