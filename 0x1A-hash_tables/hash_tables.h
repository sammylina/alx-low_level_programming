#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_

/**
 * struct hash_node_s - Node of hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: value(data) of the corresponding key
 * @next: A pointer to the next node of the List
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: an array of size @size
 * each cell of the array is head for hash_node
 * we want to solve collision using chaining
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

#include <unistd.h>
#include <stdlib.h>

hash_table_t *hash_table_create(unsigned long int size);

#endif
