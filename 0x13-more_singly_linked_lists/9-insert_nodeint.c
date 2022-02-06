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
	listint_t *new_node, *idxnode;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	idxnode = *head;
	i = 2;
	while (i != idx)
	{
		i += 1;
		idxnode = idxnode->next;
	}
	new_node->n = n;
	new_node->next = idxnode->next;
	idxnode->next = new_node;

	return (new_node);
}
