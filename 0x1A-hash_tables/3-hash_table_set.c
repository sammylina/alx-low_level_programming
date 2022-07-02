#include "hash_tables.h"

/**
 * hash_table_set - insert value to the hash table
 * @ht: pointer to the hash table
 * @key: key in the hash table
 * @value: value for the corresponding key
 *
 * Return: 1 if it fails and 0 on success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (1);

	index = key_index((const unsigned char *)key, ht->size);
	printf("hashed index: %d\n", index);
	current = ht->array[index];

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (1);
	}
	printf("current node %p\n", current);
	while (current)
	{
		if (current->key == key)
		{
			current->value = strdup(value);
			return (0);
		}
		else if (current->next == NULL)
		{
			new_node->key = (char *)key;
			new_node->value = strdup(value);
			new_node->next = NULL;
			current->next = new_node;
			return (0);
		}
		current = current->next;
	}
	new_node->key = (char *)key;
	new_node->value = strdup(value);
	new_node->next = NULL;
	ht->array[index] = new_node;

	return (0);
}
