#include "lists.h"

/**
 * free_dlistint - free memory of a doubly linked list
 * @head: pointer to the first node
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	head = head->next;
	while (head && head->next)
	{
		free(head->prev);
		head = head->next;
	}
	free(head->prev);
	free(head);
}

