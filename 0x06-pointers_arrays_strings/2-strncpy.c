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
	int src_len = strlen(src);

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = src[i];
	if (n >= src_len)
		i = src_len - 1;
	for ( ; i < n; i++)
		*(dest + i) = src[i];

	return (dest);
}

