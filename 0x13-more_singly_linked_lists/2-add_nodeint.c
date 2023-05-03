#include "lists.h"
/**
 * add_nodeint - f
 * @head: h
 * @n: d
 * Return: r
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node = NULL;

if (head == NULL)
return (NULL);

node = malloc(sizeof(listint_t));
node->n = n;
node->next = *head;
*head = node;
return (node);
}
