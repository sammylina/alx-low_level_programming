#include <stdio.h>

/**
 * main - print number of arguments passed int to
 * the program
 * @argc: number of arguments
 * @argv: array of args
 *
 * Return: 0 on sucess
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
