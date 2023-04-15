#include "main.h"

/**
 * _pow_recursion - calculate @x^@y
 * @x: int value
 * @y: positive integer value
 *
 * Return: -1 if @y is negative or @x^@y on success
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));

}
