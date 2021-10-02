#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - create duplicate of a string
 * @str: string to depulicate
 *
 * Description: it takes a string and create
 * copy of it and return refernce to the copy
 * Return: if successful pointer to the copy string
 * if not NULL
 */
char *_strdup(char *str)
{
	int str_len, i;
	char *str_cpy;

	if (str == NULL)
		return (NULL);

	str_len = strlen(str);
	str_cpy = malloc(str_len + 1);
	if (str_cpy == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		*(str_cpy + i) = *str;
		str++;
		i++;
	}
	*(str_cpy + i) = '\0';
	return (NULL);
}
