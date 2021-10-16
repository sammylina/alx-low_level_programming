#include "main.h"

/**
 * _memset - set n number of memory to b value
 * @s: the memory pointer
 * @b: value to fill the memory
 * @n: number of bytes to fill in
 *
 * Return: pointer to the memory
 */

char *_memset(char *s, char b, int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
