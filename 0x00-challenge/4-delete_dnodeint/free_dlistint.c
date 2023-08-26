#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - A list that is free
 * @head: The first element pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
