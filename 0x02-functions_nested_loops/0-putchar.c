#include "main.h"

/**
 * main - entry of the program
 *
 * Desription: include _putchar from another file
 * and print _putchar
 *
 * Return: 0
 */
int main(void)
{

	int i; 
	char *arr = "_putchar";
	for(i = 0; i < 9; i++){
		_putchar(arr[i]);
	}
	_putchar(10);
	return 0;
}
