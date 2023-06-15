#include "lists.h"

/**
 * dlistint_len - function
 * @h: pointer
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h)
	{
	c++;
	h = h->next;
	}
	return (c);
}
