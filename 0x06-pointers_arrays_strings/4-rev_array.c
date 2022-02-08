#include "main.h"

/**
 * reverse_array - reverse the array
 * @a: pointer to the array
 * @n: size of the array
 *
 * Return: None
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i != n && i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
	}
}
