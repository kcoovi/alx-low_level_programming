#include "hash_tables.h"

/**
 * key_index - Key index
 * @key: key
 * @size: size
 * Return: return
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
