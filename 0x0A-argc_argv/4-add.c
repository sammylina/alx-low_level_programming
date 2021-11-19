#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int stoi(char *str);
/**
 * main - add numbers
 * @argc: number of arugment to the program
 * @argv: array of arguments
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
		if (stoi(argv[i]) == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += stoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
/**
 * stoi - conver string to integer
 * @str: number in string type
 *
 * Return: converted number on success
 * and -1 on failure
 */
int stoi(char *str)
{
	int i, len, sum;

	if (str == NULL)
	{
		return (0);
	}
	len = strlen(str);
	sum = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] - '0' > 9)
		{
			return (-1);
		}
		sum = sum * 10 + (str[i] - '0');
	}
	return (sum);
}
