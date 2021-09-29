#include <string.h>
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

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < strlen(src); i++)
		dest[i] = '\0';

	return (dest);
}
