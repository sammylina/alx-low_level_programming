#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the Hashtable
 *
 * Return: on success pointer to the newly
 * created Hashtable else NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table;
	hash_node_t *hash_table_nodes;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table ==  NULL)
		return (NULL);

	hash_table->size = size;
	
	hash_table_nodes = malloc(sizeof(hash_table_t) * size);

	if (hash_table_nodes == NULL)
		return (NULL);
	
	hash_table->array = &hash_table_nodes;

	return (hash_table);
}
