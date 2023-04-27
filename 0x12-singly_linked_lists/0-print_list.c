#include <stdio.h>
#include "lists.h"
/**
 * print_list - the function
 * @h: pointer
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next, count++)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
	}
	return (count);
}
