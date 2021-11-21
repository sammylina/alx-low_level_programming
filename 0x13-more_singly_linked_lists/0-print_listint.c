#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print signly linked list
 * @h: point to head of the list
 *
 * Return: size of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t list_size;
	const listint_t *current_node;

	list_size = 0;
	current_node = h;
	while (current_node)
	{
		list_size++;
		printf("%d\n", current_node->n);
		current_node = current_node->next;
	}

	return (list_size);
}
