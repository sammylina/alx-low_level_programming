#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *tmp;
	unsigned int index = 0;

	if (ht == NULL)
		return;
	while (index < ht->size)
	{
		current = ht->array[index];
		while (current)
		{
			tmp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = tmp;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
