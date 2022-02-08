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
	int i, j;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int number[] = {52, 51, 48, 55, 49};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
			{
				str[i] = number[j];
			}
		}
		j = 0;
	}
	return (str);
}
