#include "main.h"

/**
 * array_range - creates array of integer
 * @min: starting value of the array
 * @max: last value of the array
 *
 * Return: pointer the the integer array
 */
int *array_range(int min, int max)
{
	unsigned int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
