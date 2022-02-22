#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end of the list
 * @head: pointer to the head of the list
 * @n: integer value of the new node
 *
 * Return: on success pointer to the newly created node else NULL.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *curr_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		curr_node = *head;
		while (curr_node->next)
		{
			curr_node = curr_node->next;
		}
		new_node->n = n;
		curr_node->next = new_node;
		new_node->prev = curr_node;
	}
	return (curr_node);
}
