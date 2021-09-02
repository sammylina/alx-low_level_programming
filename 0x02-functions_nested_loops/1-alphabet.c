#include "main.h"

/**
 * print_alphabet - print small alphabet letters
 *
 * Description: print alphabet letters
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar(10);
}
