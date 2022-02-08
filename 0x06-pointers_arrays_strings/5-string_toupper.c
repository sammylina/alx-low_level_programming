#include "main.h"

/**
 * string_toupper - conver lowercase string to uppercase
 * @str: the string to be converted
 *
 * Return: a pointer of uppercased string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
