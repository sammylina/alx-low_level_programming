#include "main.h"

/**
 * times_table - prints 9 times table starting from 0
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, num;

	i = j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			num = i * j;
			if (j == 0)
			{
				print_formated_first_digit(num);
			}
			else if (j == 9)
			{
				print_formated_last_digit(num);
			}
			else
			{
				print_formated_digit(num);
			}

			j++;
		}
		j = 0;
		i++;
		_putchar(10);
	}
}

/**
 * print_formated_first_digit - prints fist digit
 * of table in a " d," format
 * @n: no to be printed
 *
 * Return: Nothing
 */
void print_formated_first_digit(int n)
{
	_putchar(n + '0');
	_putchar(44);

}
/**
 * print_formated_digit - prints any digit
 * of table in a "  d," or " dd," format
 * @n: number to be printed
 *
 * Return: Nothing
 */
void print_formated_digit(int n)
{
				if ((n / 10) == 0)
				{
				_putchar(32);
				_putchar(32);
				_putchar(n + '0');
				_putchar(44);
				}
				else
				{
				_putchar(32);
				_putchar((n) / 10 + '0');
				_putchar((n) % 10 + '0');
				_putchar(44);
				}
}
/**
 * print_formated_last_digit - prints last digit
 * of table in a "  d" or " dd" format
 * @n: numbre to print
 *
 * Return: Nothing
 */
void print_formated_last_digit(int n)
{

				if ((n / 10) == 0)
				{
					_putchar(32);
					_putchar(32);
					_putchar(n + '0');
				}
				else
				{
					_putchar(32);
					_putchar((n) / 10 + '0');
					_putchar((n) % 10 + '0');
				}
}
