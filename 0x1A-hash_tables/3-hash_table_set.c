#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - add an element to the hash table
 * @ht: pointer to hash table
 * @key: key to map in to index
 * @value: value to store in corresponding index
 *
 * Return: 1 if succeeded and 0 if it failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (!strlen(key))
	{
		return (-1);
	}

	index = key_index((const unsigned char*)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (-1);
	}
	node->key = (char *)key;
	node->value = (char *)value;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (1);
}
