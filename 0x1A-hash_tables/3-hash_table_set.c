#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	const char *value_copy;
	hash_node_t *new_node;
	unsigned long int key_idx;
	if (key == NULL) return (1);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (1);
	}

	value_copy = strdup(value);
	new_node->next = NULL;
	new_node->key = (char *)key;
	new_node->value = (char *)value_copy;
	key_idx = key_index((const unsigned char *)key, ht->size);
	ht->array[key_idx] = new_node;
	
	return (0);
}
