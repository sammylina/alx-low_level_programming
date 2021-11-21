#include "lists.h"

/**
 * free_listint - free a linked list(listint_t )
 * @head: point to the head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head)
	{
		current_node = head;
		head = current_node->next;
		free(current_node);
	}
}
