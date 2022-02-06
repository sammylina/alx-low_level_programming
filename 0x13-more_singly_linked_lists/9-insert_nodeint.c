#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at idx position of list
 * @head: pointer to head of the list
 * @idx: index to insert in to the list
 * @n: value of the new node
 *
 * Return: the address of new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current_node = *head;
	i = 1;
	while (current_node &&  i != idx)
	{
		current_node = current_node->next;
		i += 1;
	}
	if (current_node)
	{
		new_node->next = current_node->next;
		current_node->next = new_node;
		return (new_node);
	}
	else
	{
		free(new_node);
		return (NULL);
	}
}
