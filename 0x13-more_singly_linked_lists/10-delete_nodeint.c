#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at index
 * @head: pointer to head of the list
 * @index: position of node to delete
 *
 * Return: 1 is succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *deleted_node;
	unsigned int i;

	if (index == 0 && *head)
	{
		deleted_node = *head;
		*head = deleted_node->next;
		free(deleted_node);
		return (1);
	}
	current_node = *head;
	i = 1;
	while (i != index && current_node)
	{
		current_node = current_node->next;
		i += 1;
	}

	if (current_node && current_node->next)
	{
		deleted_node = current_node->next;
		current_node->next = deleted_node->next;
		free(deleted_node);
		return (1);
	}
	else
	{
		return (-1);
	}
}
