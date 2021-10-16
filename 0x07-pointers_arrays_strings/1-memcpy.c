#include "main.h"

/**
 * _memcpy - copy n bytes from src to dest
 * @dest: bytes will be copied to
 * @src: bytes to be copied from
 * @n: size of bytes to copy
 *
 * Return: popinter to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
