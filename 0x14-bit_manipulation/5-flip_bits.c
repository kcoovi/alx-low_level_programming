#include "main.h"
/**
 * flip_bits - function
 * @n: n
 * @m: m
 * Return: return
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i = 0;
unsigned long int result = n ^ m;

	while (result != 0)
	{
	i += result & 1;

	result >>= 1;
	}
return (i);
}
