#include "hash_tables.h"

/**
 * hash_table_set - insert value to the hash table
 * @ht: pointer to the hash table
 * @key: key in the hash table
 * @value: value for the corresponding key
 *
 * Return: 0 if it fails and 1 on success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;
	hash_node_t *head;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	head = current;
	while (current)
	{
		if (current->key == key)
		{
			current->value = strdup(value);
			return (1);
		}
		else if (current->next == NULL)
		{
			new_node->key = (char *)key;
			new_node->value = strdup(value);
			new_node->next = NULL;
			new_node->next = head;
			ht->array[index] = new_node;
			return (1);
		}
		current = current->next;
	}
	new_node->key = (char *)key;
	new_node->value = strdup(value);
	new_node->next = NULL;
	ht->array[index] = new_node;

	return (1);
}
