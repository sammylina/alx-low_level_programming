#include "lists.h"

/**
 * listint_len - print length of list
 * @h: point to the head of the list
 *
 * Return: length of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t list_size;
	const listint_t *current_node;

	current_node = h;
	list_size = 0;
	while (current_node)
	{
		list_size++;
		current_node = current_node->next;
	}

	return (list_size);
}
