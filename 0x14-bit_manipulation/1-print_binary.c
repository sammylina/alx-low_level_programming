#include "main.h"

/**
 * print_binary - convert deciam l to binary and print it
 * @n: decimal number to be converted to binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	char c;

	while (n > 0)
	{
		c = n & 1;
		if (c == 1)
			_putchar('1');
		else if (c == 0)
			_putchar('0');
		n >>= 1;
	}
}
