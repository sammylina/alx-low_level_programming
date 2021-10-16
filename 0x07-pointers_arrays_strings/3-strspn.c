#include "main.h"
#include <stdio.h>

/**
 * _strspn - count number of prefix charactrer in a string
 * @s: pointer to source string
 * @accept: prefix chars we are looking for
 *
 * Return: number of prefix chars in source string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i, found = 1;

	n = 0;
	while (*s)
	{
		if (found)
		{

			for (i = 0; accept[i] != '\0'; i++)
			{
				if (accept[i] == *s)
				{
					found = 1;
					n++;
					break;
				}
				else
				{
					found = 0;
				}
			}
		}
		s++;
	}
	return (n);
}
