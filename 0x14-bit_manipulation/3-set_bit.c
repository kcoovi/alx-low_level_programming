#include "main.h"
/**
 * set_bit - function
 * @n: integer
 * @index: index
 * Return: return
 */
int set_bit(unsigned long int *n, unsigned int index)
{

if (index > 63)
{
return (-1);
}

unsigned long int bit_position = 1UL << index;

*n != bit_position;

return (1);
}
