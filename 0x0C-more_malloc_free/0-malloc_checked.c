#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: memory size to allocate in bytes
 *
 * Description: allocate @b size of memeory
 * and return pointer to the memory if succesful
 * Return: apointer if sucessful or 98 if it fails to allocate
 */

void *malloc_checked(unsigned int b)
{
	void *mem_loc;

	mem_loc = malloc(b);
	if (mem_loc == NULL)
		exit(98);
	return (mem_loc);
}
