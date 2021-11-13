#include "variadic_functions.h"

/**
 * sum_them_all - add n number of integers
 * @n: number of integers
 *
 * Return: sum of integers
 */

int sum_them_all(unsigned int n, ...)
{
	unsigned int sum, i;
	va_list nums;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);

	return (sum);
}
