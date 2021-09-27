#include <stdio.h>

/**
 * main - entry of the program
 *
 * Description: Prints the file name it was compiled from
 * Return: 0 if succesful
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
