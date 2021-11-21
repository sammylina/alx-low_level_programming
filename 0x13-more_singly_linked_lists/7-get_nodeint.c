#include "lists.h"

/**
 * get_nodeint_at_index - get node at position index
 * @head: point to the head of the list
 * @index: index of the node
 *
 * Return: node at position index of NULL if
 * it dosen't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	node = head;
	for (i = 1; index >= i; i++)
	{
		node = node->next;
	}
	if (!node)
	{
		return (NULL);
	}
	return (node);
}
