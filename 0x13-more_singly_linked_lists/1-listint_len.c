#include "lists.h"

/**
 * listint_len - f
 * @h: h
 * Return:  n
 */
size_t listint_len(const listint_t *h)
{
size_t a = 0;

while (h != NULL)
{
a++;
h = h->next;
}
return (a);
}
