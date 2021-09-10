#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @str: a string to be rversed
 *
 * Description: The function take string as
 * argument and reverse the original string,
 * not the value of string passed in to the function.
 *
 * Return Nothing
 */

void rev_string(char *str)
{
	int t, i, len;

	len = strlen(str);

	for (i = 0; i < len / 2; i++)
	{
		t = *(str + i);
		*(str + i) = *(str + len - i - 1);
		*(str + len - i - 1) = t;
	}
}
