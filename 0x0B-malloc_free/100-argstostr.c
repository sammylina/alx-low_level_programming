#include "main.h"

/**
 * argstostr - concatinate arguments to one string
 * @ac: number of arguments
 * @av: pointer to array of strings
 *
 * Return: pointer to new string
 * or NULL if fails
 */

char *argstostr(int ac, char  **av)
{
	char *new_str;
	int i, j, size;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	size = 1;
	for (i = 0; i < ac; i++)
	{
		size = size + strlen(av[i]) + 1;
	}
	new_str = malloc(size * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0; i < ac; i++)
	{
		while (*(av[i]))
		{
			new_str[j++] = *(av[i]);
			(av[i])++;
		}
		new_str[j++] = '\n';
	}
	new_str[j] = '\0';

	return (new_str);
}
