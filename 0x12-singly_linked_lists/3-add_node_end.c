
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function
 * @head: pointer
 * @str: string
 * Return: new
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode;
list_t *c = *head;
unsigned int len;

	for (len = 0; str[len]; len++)
	;

	newnode = malloc(sizeof(list_t));
	if (newNode == NULL)
	return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	if (!c)
	{
	*head = newNode;
	return (newNode);
	}

	while (c->next)
	c = c->next;

	c->next = newNode;
	return (newNode);
}
