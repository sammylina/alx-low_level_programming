#include "main.h"

/**
 * _isalpha - check if a character is alphabetic
 * @c: the character
 *
 * Return: 1 if @c is alphabetic. 0 if it is not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 96 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
