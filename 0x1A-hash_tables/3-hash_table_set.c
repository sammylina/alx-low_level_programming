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

	new_node = create_node(key, value);
	if (new_node == NULL)
	{
		return (0);
	}
	head = current;
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(new_node);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		else if (current->next == NULL)
		{
			new_node->next = head;
			ht->array[index] = new_node;
			return (1);
		}
		current = current->next;
	}
	ht->array[index] = new_node;

	return (1);
}

/**
 * create_node - create a new hash node
 * @key: key of the new hash node
 * @value: value of the new hash node
 *
 * Return: newly created hash node, if fails NULL
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (new_node->value == NULL)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
