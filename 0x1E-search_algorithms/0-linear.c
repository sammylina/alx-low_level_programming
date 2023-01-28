#include <stdio.h>
#include "search_algos.h"


/**
 * linear_search - search a array using linear search algorithm
 * @array: pointer to array to be search
 * @size: size of @array
 * @value: the value we are searching from the @array
 *
 * Return: -1 on failure and index of item at success
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i += 1;
	}
	return (-1);
}
