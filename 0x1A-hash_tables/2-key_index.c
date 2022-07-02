#include "hash_tables.h"

/**
 * key_index - change a string key to array index
 * @key: string key
 * @size: size of the array
 *
 * Return: index of array that key is hashed to
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_key;

	hashed_key = hash_djb2(key);

	return (hashed_key % size);
}
