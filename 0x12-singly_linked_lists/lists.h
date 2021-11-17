#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct list_s - struct node for linked list
 * @str: string value of the node
 * @len: length of string
 * @next: pointer to th next node
 *
 * Description: a note that represents string
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
int _putchar(int c);

#endif
