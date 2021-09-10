#include <stdio.h>

/**
 * main -entry of the program
 *
 * Description: prints 0-9 using putchar()
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	putchar(10);

	return (0);
}
