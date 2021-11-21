#include <stdio.h>

/**
 * first - this function will excute
 * before main
 *
 * Return: void
 */

void __attribute__((__constructor__)) first()
{
	char *s1 = "You're beat! and yet, you must allow,\n";
	char *s2 = "I bore my house upon my back!\n";

	printf("%s%s", s1, s2);
}
