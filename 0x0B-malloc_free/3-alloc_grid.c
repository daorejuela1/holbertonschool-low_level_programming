#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - allocate matrix in the form of memory
 *@width: matrix col
 *@height: matrix row
 *Return: matrix
 */
int **alloc_grid(int width, int height)
{
	int **matrix, i = 0, row = 0, col = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
		matrix[i] = (int *)malloc(height * sizeof(int));
	for (row = 0; row < width; row++)
		for (col = 0; col < height; col++)
			matrix[col][row] = 0;
	return (matrix);
}
