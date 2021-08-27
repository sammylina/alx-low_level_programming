#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry of program
 * Description: prints the value of
 * n is negative, positive or zero
 * Return: 0 if exits coreectyle
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
