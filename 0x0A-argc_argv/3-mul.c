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

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", prod);

	return (0);
}
