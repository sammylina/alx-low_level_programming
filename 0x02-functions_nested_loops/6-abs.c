#include "main.h"

/**
 * _abs - find absolute value of an integer
 * @n: number to find its absolute value
 *
 * Return: absolute value of @n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
