#include "main.h"
#include <string.h>

/**
 * _strncpy - copy @n bytes of @src t @dest
 * @dest: A pointer to destination string
 * @src: A pointer to source string
 * @n: number of bytes to be copied from @src to @dest
 *
 * Description: _strncpy take three args ans copy @n bytes of
 * chars from @src to @dest
 * Return: A pointer to @dest(copied string)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = src[i];
	for ( ; i < n; i++)
		*(dest + i) = src[i];

	return (dest);
}

