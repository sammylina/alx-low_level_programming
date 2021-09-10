#include "main.h"
#include <string.h>

/**
 * _strcat - concatinate two strings
 * @dest: First arg and to append to
 * @src: Second arg and to copy from
 *
 * Description: strcat takes two strings and append @src to
 * @dest. It also remove '\0' char from @dest and add it back after
 * @src is appended.
 * Return: Apointer points to dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;
	int src_len = strlen(src);

	for (i = 0; i < src_len && src[i] != '\0', i++)
		*(dest + dest_len + i) = src[i];
	dest[dest_len + i];

	return (dest);
}
