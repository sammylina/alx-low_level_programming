#include "hash_tables.h"

/**
 * key_index - generates index from key using djb2 algorithm
 * @key: key to be changed in to index
 * @size: size of the hash table
 *
 * Return: index where key value pair should be saved in the hash_table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int index;

	index = hash_djb2(key);

	return (index % size);
}
