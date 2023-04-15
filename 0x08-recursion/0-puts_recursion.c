#include "main.h"

/**
 * _puts_recursion - print a string to stdout
 * @s: pointer to string
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	size_t size = strlen(s);
	size_t i = 0;

	while (i < size)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
