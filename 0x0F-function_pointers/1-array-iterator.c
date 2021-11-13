#include "function_pointers.h"

/**
 * array_iterator - iterate through an array call action
 * @array: array to iterate on
 * @size: size of array
 * @action: function that excute for each array element
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}

}
