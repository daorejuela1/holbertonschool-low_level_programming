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

	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (row = i - 1; row >= 0; row--)
			{
				free(matrix[row]);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
		{
			matrix[row][col] = 0;
		}
	}
	return (matrix);
}
