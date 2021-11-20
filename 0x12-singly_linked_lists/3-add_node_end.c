#include "lists.h"

/**
 * add_node_end - add node to end of the list
 * @head: head of the list
 * @str: value to the new node
 *
 * Return: address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
		current_node = new_node;
	}
	else
	{
		while (current_node)
		{
			if (current_node->next == NULL)
			{
				current_node->next = new_node;
				current_node = new_node->next;
			}
			else
			{
				current_node = current_node->next;
			}
		}
	}
	return (new_node);
}
