#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function
 * @head: head
 */

void free_list(list_t *head)
{
	list_t *c;

	while (head != NULL)
	{
		c = head;
		head = head->next;
		free(c->str);
		free(c);
	}
}
