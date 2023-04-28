#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function
 * @head: pointer
 * @str: string
 * Return: new_node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;

	for (len = 0; str[len]; len++)
	;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);

}
