#include "main.h"

/**
 * binary_to_uint - convert string binary to decimal
 * @b: string binary value
 *
 * Return: 0 if @b is NULL or it contains other that 0 and 1
 *	   otherwise return the integer equivalent
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	size_t value = 0;
	int bit = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; i < strlen(b); i++)
	{
		if ((b[i] != '1') && (b[i] != '0'))
		{
			return (0);
		}
		bit = b[i] - 48;
		value <<= 1;
		value |= bit;
	}
	return (value);
}
