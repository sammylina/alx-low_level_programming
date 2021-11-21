#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the list
 * @head: point to head of the list
 * @n: integer value to the new node
 *
 * Return: address of the new node of NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}

	return (new_node);
}
