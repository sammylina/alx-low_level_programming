#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print elements of a doubly linked list
 * @h: head of the list
 *
 * Return: size of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current_node;
	size_t node_size;

	if (h == NULL)
	{
		return (0);
	}
	current_node = h;
	node_size = 0;
	while (current_node)
	{
		node_size++;
		printf("%d\n", current_node->n);
		current_node = current_node->next;
	}
	return (node_size);
}
