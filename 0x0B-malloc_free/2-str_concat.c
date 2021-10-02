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

	int s1_size, s2_size, i;
	char *new_str;

	if (s1 == NULL)
		s1_size = 0;
	else
		s1_size = strlen(s1);
	if (s2 == NULL)
		s2_size = 0;
	else
		s2_size = strlen(s2);
	new_str = malloc(s1_size + s2_size + 1);
	new_str = strcpy(new_str, s1);
	i = s1_size + 1;
	while (*s2)
	{
		*(new_str + i) = *s2;
		i++;
		s2++;
	}
	return (new_str);
}
