#include "lists.h"

/**
 * list_len - calculate length of list_t linkedlist
 *
 * @h: the list
 *
 * Return: list length
 */

size_t list_len(const list_t *h)
{
	size_t list_size;

	list_size = 0;
	while (h)
	{
		list_size++;
		h = h->next;
	}

	return (list_size);
}
