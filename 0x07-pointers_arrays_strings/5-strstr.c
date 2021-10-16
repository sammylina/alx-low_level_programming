#include <string.h>
#include "main.h"

/**
 * _strstr - find match of @needle in string @haystack
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: pointer to the starting byte of substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, needle_len, found;

	found = 0;
	needle_len = strlen(needle);
	while (*haystack)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[i] == needle[i])
			{
				found++;
			}
		}
		if (found == needle_len)
		{
			return (haystack);
		}
		found = 0;
		haystack++;
	}
	return (NULL);
}
