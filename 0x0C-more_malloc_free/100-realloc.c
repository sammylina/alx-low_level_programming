#include "main.h"

/**
 * _realloc - reallocate a memory block using malloc
 * @ptr: previously allocate memory to reallocate
 * @old_size: size of previously allocated memory
 * @new_size: size to reallocate
 *
 * Return: a void pointer that points to the
 * reallocated pointer or NULL if sth fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (ptr);
	}
	if (ptr == NULL)
	{
		new_ptr =  malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
	}
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < old_size; i++)
		{
			*((char *)(new_ptr) + i) = *((char *)ptr + i);
		}
	}
	return (new_ptr);
}
