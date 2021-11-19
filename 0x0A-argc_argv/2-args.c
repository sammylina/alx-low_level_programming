#include <stdio.h>

/**
 * main - print each argument to the program
 *@argc: number of arguments
 *@argv: array of arguments
 *
 * Return: 0 on success
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
