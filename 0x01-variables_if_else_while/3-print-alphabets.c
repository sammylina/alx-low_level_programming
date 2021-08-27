#include <stdio.h>

/**
 * main - print lowerand upper case alphabet chars
 *
 * Description: only use putchar
 * Return: zero if successful
 */

int main(void)
{

	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
