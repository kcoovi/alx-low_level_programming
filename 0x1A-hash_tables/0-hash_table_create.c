#include "hash_tables.h"

/**
 * hash_table_create - function
 * @size: size
 * Return: ht
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
	return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
	return (NULL);
	}

	for (; i < size; i++)
	ht->array[i] = NULL;

	return (ht);
}
