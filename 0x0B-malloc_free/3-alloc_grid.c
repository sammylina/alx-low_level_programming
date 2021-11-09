#include "main.h"

/**
 * alloc_grid - allocate 2D memory place
 * @width: width of the grid(column)
 * @height: row of the grid
 *
 * Return: pointer to the allocated memor
 * or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **arr_ptr;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	arr_ptr = malloc(sizeof(*arr_ptr) * height);
	if (arr_ptr == NULL)
	{
		return (NULL);
	}
	j = width;
	for (i = 0; i < height; i++)
	{
		arr_ptr[i] = malloc(sizeof(**arr_ptr) * width);
		if (arr_ptr[i] == NULL)
		{
			free(arr_ptr);
			return (NULL);
		}
		while (j)
		{
			arr_ptr[i][--j] = 0;
		}
		j = width;
	}
	return (arr_ptr);
}
