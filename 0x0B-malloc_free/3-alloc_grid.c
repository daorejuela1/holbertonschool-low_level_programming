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
	int **matrix, i = 0, row = 0, col = 0, reps, reps2;

	if (width <= 0 || height <= 0)
		return (NULL);
	if (width < height)
	{
		reps = height;
		reps2 = width;
	}
	else
	{
		reps = width;
		reps2 = height;
	}
	matrix = (int **)malloc(reps * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < reps; i++)
	{
		matrix[i] = (int *)malloc(reps2 * sizeof(int));
		if (matrix[i] == NULL)
			return (NULL);
	}
	for (row = 0; row < reps2; row++)
	{
		for (col = 0; col < reps; col++)
		{
			matrix[row][col] = 0;
		}
	}
	return (matrix);
}
