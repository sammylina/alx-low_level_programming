#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add new node at beginning of a list
 * @head: points to head of the list
 * @n: integer value to new node
 *
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	*head = new_node;

	return (new_node);

}
