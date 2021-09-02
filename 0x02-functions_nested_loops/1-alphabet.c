#include "main.h"

/**
 * main - entry of the program
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
	return;
}
