#include "main.h"
#include <string.h>

/**
 * _puts - print a string
 * @str: take string as param
 *
 * Description: take @str and print it out
 * Return: Nothing
 */
void _puts(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar(10);
}
