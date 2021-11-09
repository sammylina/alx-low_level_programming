#include "main.h"

/**
 * free_grid - free 2D allocated memory
 * @grid: pointer to 2D array
 * @height:rows of the array
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
