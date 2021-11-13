#include "variadic_functions.h"

/**
 * print_numbers - print n number of numbers
 * @separator: separator between numbers
 * @n: number of integers to print
 *
 * Return: pow of num^times
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, j;

	va_start(nums, n);
	j = 0;
	for (i = 0; i < n; i++)
	{
		print_num(va_arg(nums, int));
		if (separator != NULL)
		{
			while (*(separator + j) && i < (n - 1))
			{
				_putchar(*(separator + j));
				j++;
			}
			j = 0;
		}
	}
	va_end(nums);
	_putchar(10);
}

/**
 * _pow - calculate x^y
 * @num: base
 * @times: exponent
 *
 * Return: pow of num^times
 */
int _pow(int num, int times)
{
	int ans;

	ans = 1;
	while (times)
	{
		ans = ans * num;
		times--;
	}
	return (ans);
}
/**
 * print_num - print interger in sting
 * @num: intergr to print
 *
 * Return: void
 */

void print_num(int num)
{
	int num_size, digit;
	/* num is positive */
	if (num > 0)
	{
		num_size = number_of_digit(num);
		digit = 0;
		while (num_size)
		{
			digit = num / _pow(10, (num_size - 1));
			num = num % _pow(10, (num_size - 1));
			_putchar(digit + '0');
			num_size--;
		}
	}
	else if (num < 0)
	{
		num_size = number_of_digit(num);
		digit = 0;
		_putchar(45);
		while (num_size)
		{
			digit = num / _pow(10, (num_size - 1));
			num = num % _pow(10, (num_size - 1));
			_putchar('0' - digit);
			num_size--;
		}
	}
	else
	{
		_putchar(48);
	}
}

/**
 * number_of_digit - get digit of a number
 * @num: integer
 *
 * Return: digit of integer @num
 */

int number_of_digit(int num)
{
	int digit;

	digit = 0;
	if (num == 0)
	{
		return (1);
	}
	while (num)
	{
		digit++;
		num = num / 10;
	}
	return (digit);
}
