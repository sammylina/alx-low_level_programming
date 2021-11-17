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

	list_size = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		list_size++;
		h = h->next;
	}
	return (list_size);
}
