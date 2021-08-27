#include <stdio.h>

/**
 * main - print lower case alphabet chars
 *
 * Description: only use putchar
 * Return: zero if successful
 */

int main(void)
{

	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
