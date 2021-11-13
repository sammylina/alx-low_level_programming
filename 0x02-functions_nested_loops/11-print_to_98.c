#include "main.h"

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
 * print_to_98 - print number from @n to 98
 * @n: starting point
 *
 * Return: Nothing
 */
void print_to_98(int n)
{

	if (n > 98)
	{
		print_num(n);
		_putchar(44);
		n--;
		while (n > 98)
		{
			_putchar(32);
			print_num(n);
			_putchar(44);
			n--;
		}
		_putchar(32);
		print_num(n);
	}
	else if (n < 98)
	{
		print_num(n);
		_putchar(44);
		n++;
		while (n < 98)
		{
			_putchar(32);
			print_num(n);
			_putchar(44);
			n++;
		}
		_putchar(32);
		print_num(n);
	}
	else
	{
		print_num(98);
	}
	_putchar(10);
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
