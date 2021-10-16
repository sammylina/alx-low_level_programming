#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - get location of first occurance of a char
 * in a string
 * @s: pointer to string
 * @accept: pointer to string of chars
 *
 * Return: pointer to byte in @s that matches one of the bytes in
 * @accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
