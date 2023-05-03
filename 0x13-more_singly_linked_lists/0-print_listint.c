#include "lists.h"
/**
 * print_listint - f
 * @h: h
 * Return: re
 */
size_t print_listint(const listint_t *h)
{
	size_t r = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	r++;
	}
return (r);
}
