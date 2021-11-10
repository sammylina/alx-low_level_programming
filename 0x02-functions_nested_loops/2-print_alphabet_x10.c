#include "main.h"

/**
 * print_alphabet_x10 - print a-z 10 times
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int i, j;

	j = 10;
	while (j)
	{
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar(10);
	j--;
	}
}
