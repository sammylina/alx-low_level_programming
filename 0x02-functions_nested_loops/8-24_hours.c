#include "main.h"

/**
 * jack_bauer - prints time from 00:00 to 23:59
 *
 * Return: Nothing
 */

void jack_bauer(void)
{
	int i, j, k, l;

	i = j = k = l = 0;
	while (i < 3)
	{
		while ((j < 10 && i < 2) || (j < 4 && i == 2))
		{
			while (k < 6)
			{
				while (l < 10)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(58);
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar(10);
					l++;
				}
				l = 0;
				k++;
			}
			k = l = 0;
			j++;
		}
		j = k = l = 0;
		i++;
	}
}
