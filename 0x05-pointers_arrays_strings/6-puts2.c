#include <string.h>

/**
 * puts2 - print half ot the string
 * @str: param string input for the function
 *
 * Description: print half  of the string starting from the first
 * Return: Nothing
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i = i + 2)
		_putchar(str[i]);
	_putchar(10);

}
