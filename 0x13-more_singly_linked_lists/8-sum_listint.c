#include "lists.h"

/**
 * sum_listint - add all listint_t list values
 * @head: point to head of the list
 *
 * Return: sum of list values or 0 if list is empity
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current_node;

	current_node = head;
	if (current_node == NULL)
	{
		return (0);
	}
	sum = 0;
	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
