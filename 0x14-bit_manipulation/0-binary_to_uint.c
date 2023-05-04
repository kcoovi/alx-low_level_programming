#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function
 * @b: string
 * Return: return
 */


unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int i = 0;

if (b == NULL)
return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
		return (0);
	i = 2 * i + b[a] - '0';

	}
return (i);
}
