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

	unsigned int decimal;

	if (!b)
	{
		return (0);
	}
	else
	{
		decimal = 0;

		while (*b)
		{
			if ((*b == '0') || (*b == '1'))
			{
				decimal <<= 1;
				if (*b == '1')
				{
					decimal += 1;
				}
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
