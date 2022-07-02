#include "hash_tables.h"

/**
 * hash_table_print - print element key and value of hash table
 * @ht: pointer to hash table
 *
 * Return: void
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	unsigned int comma_flag = 0;


	if (ht == NULL)
		return;
	i = ht->size;
	printf("{");
	while (i)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");
			current = ht->array[i];
			while (current)
			{
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
				if (current)
					printf(", ");
			}
			comma_flag = 1;
		}
		i--;
	}
	printf("}\n");
}
