#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node into a list at position idx
 * @h: pointer to the list
 * @idx: position of new node
 * @n: value of the new node
 *
 * Return: on success pointer to the new node else NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *curr_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	i = 1;
	curr_node = *h;
	while (curr_node->next)
	{
		if (idx == i)
		{
			new_node->n = n;
			new_node->next = curr_node->next;
			curr_node->next->prev = new_node;
			curr_node->next = new_node;
			new_node->prev = curr_node;
			return (new_node);
		}
		curr_node = curr_node->next;
		i += 1;
	}
	if (idx == i)
	{
		free(new_node);
		new_node = add_dnodeint_end(h, n);
	}
	else
	{
		free(new_node);
		new_node = NULL;
	}
	return (new_node);
}
