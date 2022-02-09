#include <stddef.h>

/**
 * hash_djb2 - hash function that implements djb2 algorithm
 * @str: key string to hash using djb2
 *
 * Return: hash value of @str
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
