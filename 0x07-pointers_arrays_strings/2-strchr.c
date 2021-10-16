#include "main.h"
#include <stddef.h>
/**
 * _strchr - find the first occurance of @c in string
 * @s: pointer to the string
 * @c: character to find
 *
 * Return: pointer to first occurance of @c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
