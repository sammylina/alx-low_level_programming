#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - nested if else loop
 *
 * Description: some description
 * Return: zero if successful
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than five\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last < 6 && !0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
