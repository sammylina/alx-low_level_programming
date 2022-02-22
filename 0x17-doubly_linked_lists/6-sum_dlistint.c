#include "lists.h"

/**
 * sum_dlistint - add the numbers of the doubly linked list
 * @head: pointer to head of the list
 *
 * Return: sum of the list or 0 if the list is empity
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *curr_node;

	if (head == NULL)
	{
		return (0);
	}

	curr_node = head;
	sum = 0;
	while (curr_node)
	{
		sum += curr_node->n;
		curr_node = curr_node->next;
	}

	return (sum);

}
