#include "lists.h"

/**
 * print_list - print content of a linked list
 * @h: pointer to head of the linked list
 *
 * Return: number of node in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t list_size;
	unsigned int i;

	list_size = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			_putchar(91);
			_putchar(48);
			_putchar(93);
			_putchar(32);
			_putchar(40);
			_putchar(110);
			_putchar(105);
			_putchar(108);
			_putchar(41);
		}
		else
		{
			_putchar(91);
			_putchar((h->len) + '0');
			_putchar(93);
			_putchar(32);
			for (i = 0; i < h->len; i++)
			{
				_putchar((h->str)[i]);
			}
		}
		_putchar(10);
		list_size++;
		h = h->next;
	}
	return (list_size);
}
