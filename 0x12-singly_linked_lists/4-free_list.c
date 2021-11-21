#include "lists.h"

/**
 * free_list - free a list
 * @head: head of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while (head)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
