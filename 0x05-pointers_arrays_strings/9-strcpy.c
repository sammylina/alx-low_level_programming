#include <string.h>
#include <stdio.h>
/**
 * _strcpy - @src string to @dest
 * @src: source of string to copy from
 * @dest: destination to copy to
 *
 * Description: Copy the string in @src to string @dest by value
 *
 * Return: pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}
