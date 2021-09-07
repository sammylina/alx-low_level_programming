#include "main.h"
#include <string.h>

/**
 * print_rev - print the string in reverse
 * @s: take s as string
 *
 * Descrption: take @s and print out in reverse order
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = strlen(s) - 1;
	int i;

	for (i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}
