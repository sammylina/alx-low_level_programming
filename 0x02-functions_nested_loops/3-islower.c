#include "main.h"

/**
 * _islower - check if @c is lower character of not
 * @c: character to check
 *
 * Return: 1 is @c is lower char. 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
