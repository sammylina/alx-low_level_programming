#include <stdlib.h>

/**
 * binary_to_uint - convert binary to decimal value
 * @b: a binary string
 *
 * Description: convert binary string to its equivalent deviaml
 * value and return it back
 * Return: the converted decimal if sucessful or 0 if fails
 */

unsigned int binary_to_uint(const char *b)
{
	int decimal = 0;

	if (!b)
	{
		return (0);
	}
	else
	{
		int binary = atoi(b), last_digit, base = 1;

		while (*b)
		{
			if ((*b == '0') || (*b == '1'))
			{
				last_digit = binary % 10;
				if (last_digit == 1)
				{
					decimal  = decimal + last_digit * base;
				}
				base  = base * 2;
				binary = binary / 10;
			}
			else
			{
				return (0);
			}
			b = b + 1;
		}
	}
	return (decimal);
}
