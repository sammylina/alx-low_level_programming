#include <stdio.h>

/**
 * main - entry pointo the f ile
 * Return: returns zero
 */
int main(void){

	int i;
	char c;
	float f;
	long long int lli;
	long int li;

	printf("Size of a char: %lu (byte)s.\n", (unsigned long)sizeof(c));

	printf("Size of an int: %lu (byte)s.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu (byte)s.\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu (byte)s.\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu (byte)s.\n", (unsigned long)sizeof(f));
	return (0);
}
