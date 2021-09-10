#include "main.h"
#include <string.h>

/**
 * _strncat - cancatinate @n numbers of chars from @src with @dest
 * @dest: string to append into(destination)
 * @src: string to append to @dest
 * @n: number of chars to take from @src
 *
 * Description: _strncat function append @n amount of chars from @src
 * to @dest
 * Return: A pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + dest_len + i) = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
