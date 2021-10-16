#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strchr - find the first occurance of @c in string
 * @s: pointer to the string
 * @c: character to find
 *
 * Return: pointer to first occurance of @c
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; i <= strlen(s); i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
