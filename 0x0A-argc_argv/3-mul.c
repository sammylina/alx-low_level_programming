#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the product of two numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int prod;

	prod = atoi(argv[1]) * atoi(argv[2]);
	if (argc < 3)
		printf("Error\n");
	else
		printf("%d\n", prod);

	return (0);
}
