#include "variadic_functions.h"

/**
 * print_strings - print n number of strings
 * @separator: separator between strings
 * @n: number of strings to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("%p", str);
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
