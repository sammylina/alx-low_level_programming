#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print number of coins
 * to make a change for an amount
 * of money
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int amount, coins, i;
	int carr[] = {25, 10, 5, 2, 1};

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(av[1]);
	if (amount < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	coins = 0;
	for (i = 0; i < 5; i++)
	{
		if (amount % carr[i] == 0)
		{
			coins += amount / carr[i];
			break;
		}
		else if (amount > carr[i])
		{
			coins  += amount / carr[i];
			amount = amount % carr[i];
		}
	}
	printf("%d\n", coins);

	return (0);
}
