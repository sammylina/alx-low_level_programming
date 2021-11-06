#include "main.h"

/**
 * _calloc - allocate memory for an arrya
 * @nmemb: number of array elements
 * @size: size of array element
 *
 * Return: a pointer to the allocated memeoty
 * or NULL if @nmemb or size is 0, or if
 * malloc failed
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
