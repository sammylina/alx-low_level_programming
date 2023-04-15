#include "main.h"

/**
 * _print_rev_recursion - print a string reversed
 * @s: pointer to string
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{

	if (s[0] == '\0')
	{
		return;
	}
	_print_rev_recursion(++s);
	s--;
	_putchar(s[0]);
}
