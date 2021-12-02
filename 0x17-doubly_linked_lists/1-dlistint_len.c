#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - return length of a dlistint_t list
 *@h: head of the list
 *
 * Return: length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current_node;
	size_t list_len;

	if (h == NULL)
	{
		return (0);
	}
	current_node = h;
	list_len = 0;
	while (current_node)
	{
		list_len++;
		current_node = current_node->next;
	}

	return (list_len);
}
