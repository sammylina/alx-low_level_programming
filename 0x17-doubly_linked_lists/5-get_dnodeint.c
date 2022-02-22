#include "lists.h"

/**
 * get_dnodeint_at_index - get node from doubly linked list
 * @head: pointer to the head
 * @index: index of the node looking for
 *
 * Return: location of the node if found else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr_node;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	curr_node = head;
	i = 0;
	while (curr_node)
	{
		if (index == i && curr_node)
		{
			return (curr_node);
		}
		curr_node = curr_node->next;
		i += 1;
	}

	return (NULL);

}
