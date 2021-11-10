#include "main.h"

/**
 * print_sign - prints the sign of a character
 * @c: character to check its sign
 *
 * Return: + if c is positive, - if negative and 0
 * if it is 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (43 - 48);
	}
	else if (n < 0)
	{
		return (45 - 48);
	}
	else
	{
		return (0);
	}
}
