#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates new hash table with fixed size
 * @size: size of hash table
 *
 * Return: pointer to the newly created table or NULL if it fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	void *array;

	if (size <= 0)
	{
		return (NULL);
	}

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}
	array = calloc(size, 8);
	if (array == NULL)
	{
		free(array);
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = array;

	return (table);

}
