#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array using the given args
 * @size: size of array to create
 * @c: elements of the arr
 *
 * Discription: create ana rray with @size size
 * and initialize it with @c char
 * Return: if @size  equals to 0 NULL otherwise pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	if (*arr == '\0')
		return (NULL);
	else
		return (arr);
}
