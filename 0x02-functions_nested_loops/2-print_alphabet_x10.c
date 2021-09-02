#include "main.h"

/**
 * print_alphabet_10x - prints a-z 10_X
 *
 * Description: it uses nested loop
 *
 * Return: 0
 */

void print_alphabet_10x(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j < 'z'; j++)
			_putchar(j);
	}
	_putchar(10);
}
