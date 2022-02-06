#include "main.h"

/**
 * leet - convert some letter with numbers
 * @str: str to be converted
 *
 * Description: convert a to 4 e to 3 o to 0 t to 7 and l to 1
 * Return: a leeted string
 */

char *leet(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = '7';
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '1';
		}
	}
	return (str);
}
