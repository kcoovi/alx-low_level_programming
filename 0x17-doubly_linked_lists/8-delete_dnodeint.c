#include "lists.h"

/**
 * delete_dnodeint_at_index - function
 * @head: pointer
 * @index: idx
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;
unsigned int i;

if (*head == NULL)
return (-1);

temp = *head;
if (index == 0)
{
*head = temp->next;
if (temp->next != NULL)
temp->next->prev = NULL;
free(temp);
return (1);
}

for (i = 0; i < index; i++)
{
if (temp == NULL)
return (-1);
temp = temp->next;
}

if (temp == NULL)
return (-1);

temp->prev->next = temp->next;
if (temp->next != NULL)
temp->next->prev = temp->prev;

free(temp);
return (1);
}
