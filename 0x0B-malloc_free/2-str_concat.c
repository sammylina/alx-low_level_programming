#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatinate two strings
 * @s1: first string to concatinate
 * @s2: second string to concatinate
 *
 * Description: taske two strings and append the second
 * to the first one
 * Return: if sucessful a pointer to new address
 * that holds the concatinated string
 * else NULL
 */
char *str_concat(char *s1, char *s2)
{

	char *new_str;
	int size, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = strlen(s1) + strlen(s2) + 1;
	new_str = malloc(size * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		new_str[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		new_str[i] = *s2;
		s2++;
		i++;
	}
	new_str[i] = '\0';

	return (new_str);
}
