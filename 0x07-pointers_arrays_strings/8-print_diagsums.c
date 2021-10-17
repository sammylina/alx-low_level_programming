#include "main.h"

/**
 * print_diagsums - print diagnoal sum of 2D array
 * @a: reference to 2D array
 * @size: dimension of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, r_sum, l_sum;

	r_sum = 0;
	l_sum = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				r_sum += *((a + i*size) + j);
			if ((i + j) == (size - 1))
				l_sum += *((a + i*size) + j);
		}
	}
	print_num(r_sum);
	_putchar(',');
	_putchar(' ');
	print_num(r_sum);
	_putchar('\n');
}

void print_num(int n)
{
	if (n == 0)
		_putchar('0');
	if (n / 10)
		print_num(n/10);
	_putchar(n % 10 + '0');
}
