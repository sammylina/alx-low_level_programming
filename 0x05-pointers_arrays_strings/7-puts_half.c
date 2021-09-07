#include <string.h>
#include "main.h"

/**
 * puts_half - prints the right halfof the string
 * @str: param type of string
 *
 * Description: print the second half o the string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	i = len % 2 ? len / 2 + 1 : len / 2;

	for (i; i < len; i++)
		_putchar(str[i]);
	_putchar(10);
}
