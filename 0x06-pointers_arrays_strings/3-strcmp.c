#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Description: it taketwo strings compare
 * thiervalues and return the difference
 * Return: 0 if they are equal, positibe if @s1 > @s2
 * and negative is @s1 < @s2
 */

int _strcmp(char *s1, char *s2)
{
	int ans;
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		ans = *(s1 + i) - *(s2 + i);
		if (ans != 0)
		{
			break;
		}
	}

	return (ans);

}
