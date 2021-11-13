#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array to search from
 * @size: size of the array
 * @cmp: compare two integers
 *
 * Return: index to the first found integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	i = 0;
	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
			i++;
		}
		return (-1);
	}
	return (-1);
}
