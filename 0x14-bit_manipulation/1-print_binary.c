#include "main.h"
#include <stddef.h>
/**
 * print_binary - function*
 * @n: integer
 */

void print_binary(unsigned long int n)
{
unsigned long int i;
int a;
int j = 0;
	for (a = 63; a >= 0; a--)
	{
		i = n >> a;
		if (i & 1)
	{
		_putchar('1');
		j++;
	}
	else if (j)
		_putchar('0');
	}

	if (!j)
	_putchar('0');
}
