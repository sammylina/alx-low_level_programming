#include "main.h"

/**
 * string_nconcat - concatinate n bytes of s2 to s1
 * @s1: the first string
 * @s2: the second string
 * @n: numberof bytes from s2 to copy to s1
 *
 * Return: pointer toconcatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *new_string;
	int i, string_size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	string_size = strlen(s1) + n + 1;
	new_string = malloc(string_size * sizeof(char));
	if (new_string == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*s1)
	{
		*(new_string + i) = *s1;
		s1++;
		i++;
	}
	while (string_size - 1 > i)
	{
		*(new_string + i) = *s2;
		s2++;
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
