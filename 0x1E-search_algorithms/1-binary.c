#include "search_algos.h"


/**
 * binary_search - implementation of binary search algorithm
 * @array: pointer to the first elem of the array
 * @size: size of an array
 * @value: value we are looking for
 *
 * Return: index of value if it is found
 * or -1 if array or value is NULL
 */

int binary_search(int *array, size_t size, int value)
{

	size_t l, r, m, i;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;

	while (l <= r)
	{
		i = l;
		printf("Searching in array: ");
		while (i <= r)
		{
			if (i == r)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
			i += 1;
		}
		printf("\n");
		m = (l + r) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
	}
	return (-1);
}
