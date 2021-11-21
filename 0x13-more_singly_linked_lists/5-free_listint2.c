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
