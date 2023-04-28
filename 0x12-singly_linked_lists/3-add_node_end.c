
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
list_t *new_node;
list_t *current = *head;
unsigned int len;

	for (len = 0; str[len]; len++)
	;

	newnode = malloc(sizeof(list_t));
	if (newNode == NULL)
	return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	if (!current)
	{
	*head = newNode;
	return (newNode);
	}

	while (current->next)
	current = current->next;

	current->next = newNode;
	return (newNode);
}
