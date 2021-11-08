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
	void *arr_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr_ptr = malloc(nmemb * size);
	if (arr_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)arr_ptr + i) = 0;
	}
	return (arr_ptr);
}
