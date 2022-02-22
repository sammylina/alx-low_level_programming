#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node from list at position index
 * @head: pointer to the list
 * @index: position of node to delete
 *
 * Return: 1 on success or -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr_node, *deleted_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		deleted_node = *head;
		*head = deleted_node->next;
		free(deleted_node);
		return (1);
	}
	curr_node = *head;
	i = 1;
	while (curr_node->next && curr_node->next->next)
	{
		if (i == index)
		{
			deleted_node = curr_node->next;
			deleted_node->next->prev = curr_node;
			curr_node->next = deleted_node->next;
			free(deleted_node);
			return (1);
		}
		curr_node = curr_node->next;
		i += 1;
	}
	if (i == index)
	{
		deleted_node = curr_node->next;
		curr_node->next = NULL;
		free(deleted_node);
		return (1);
	}
	else
	{
		return (-1);
	}
}
