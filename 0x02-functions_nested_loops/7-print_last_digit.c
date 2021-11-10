#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number to prints its last digit
 *
 * Return: the laast digit of @n
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (n < 0)
		ld = -1 * ld;
	_putchar(ld + '0');
	return (ld);
}
