#include <stdlib.h>
#include <stdio.h>

/**
 * main - add numbers
 *@argc: number of arugment to the program
 *@argv: array of arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int sum, i;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
