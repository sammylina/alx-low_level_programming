#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create hash table
 * @size: size of the hash table
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = malloc(sizeof(hash_table_t));
	void *arr;

	if (h_table == NULL)
	{
		free(h_table);
		return (NULL);
	}
	h_table->size = size;
	arr = calloc(size, 8);
	if (arr == NULL)
	{
		free(h_table);
		free(arr);
		return (NULL);
	}

	h_table->array = arr;

	return (h_table);
}
