#include <stdio.h>

/**
 * first - this function will excute
 * before main
 *
 * Return: void
 */

void __attribute__((__constructor__)) first()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
