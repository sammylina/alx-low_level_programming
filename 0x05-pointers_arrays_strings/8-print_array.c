#include <stdio.h>

/**
 * print_array - prints @n numbers of array elements
 * @a: The array to be printed, First argument
 * @n: numbers of elments we want to print, Second argument
 *
 * Description: The function takes two arguments (Array and number)
 * and prints out @n numbers of array elemnts
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
