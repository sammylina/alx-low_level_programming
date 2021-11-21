#include "lists.h"

/**
 * free_listint2 - free linked list and set head to NULL
 * @head: point to head pointer
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
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
