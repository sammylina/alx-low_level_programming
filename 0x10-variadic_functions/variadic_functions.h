#ifndef _VARIADIC_FUNCTIONS
#define _VARIADIC_FUNCTIONS

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

int _putchar(int c);
void print_numbers(const char *separator, const unsigned int n, ...);
int _pow(int num, int times);
void print_num(int num);
int number_of_digit(int num);

#endif
