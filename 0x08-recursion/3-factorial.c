#include "main.h"


/**
 * factorial - find factirial of n
 * @n: integer value
 *
 * Return: factorial of @n on success and -1 on failure
 */


int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
