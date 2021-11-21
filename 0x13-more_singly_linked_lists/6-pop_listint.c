#include "lists.h"

/**
 * pop_listint - delete head of the list
 * @head: point to head of the list
 *
 * Return: data of deleted node(head) or 0
 * it is empity
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *head_node;

	if (!(*head))
	{
		return (0);
	}

	data = (*head)->n;
	head_node = *head;
	*head = (*head)->next;
	free(head_node);

	return (data);
}
