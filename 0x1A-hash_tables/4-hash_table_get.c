#include "hash_tables.h"

/**
 * hash_table_get - get value from hash table using key @key
 * @ht: pointer to the hash table
 * @key: key that represent the value
 *
 * Return: value associated with the element or NULL if key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	return (NULL);
}
