#include "main.h"

/**
 * _sqrt_recursion - find sqrt of a number
 * @n: integer value
 *
 * Return: sqrt of a number or -1 if it doesn't have natural sqrt
 */

int _sqrt_recursion(int n)
{
	return (_find_sqrt(n, 0, n));
}

/**
 * _find_sqrt - search for sqrt value in binary search
 * @n: int value we want to sqrt value of
 * @lb: lower bound for binary search
 * @up: upper bound for binary search
 *
 * Return: sqrt of a number on success
 * -1 if the number doesn't have natural sqrt
 */

int _find_sqrt(int n, int lb, int up)
{
	int ans;

	if (n == 1)
	{
		return (1);
	}
	if ((up - lb) <= 1)
	{
		return (-1);
	}

	ans = (up + lb) / 2;

	if ((ans * ans) == n)
	{
		return (ans);
	}
	else if ((ans * ans) > n)
	{
		up = ans;
	}
	else if ((ans * ans) < n)
	{
		lb = ans;
	}

	return (_find_sqrt(n, lb, up));

}
