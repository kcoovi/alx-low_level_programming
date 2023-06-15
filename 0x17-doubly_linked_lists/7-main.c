#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * @h: pointer
 * @idx: index
 * @n: data
 * Return: address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp = *h;
unsigned int i = 0;

if (h == NULL)
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n));

while (temp && i < idx)
{
temp = temp->next;
i++;
}

if (!temp && i == idx)
return (add_dnodeint_end(h, n));

if (i != idx)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->prev = temp->prev;
new_node->next = temp;
temp->prev->next = new_node;
temp->prev = new_node;

return (new_node);
}
