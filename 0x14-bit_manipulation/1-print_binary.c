#include "main.h"
#include <stddef.h>
/**
 * print_binary - function*
 * @n: integer
 */

void print_binary(unsigned long int n)
{
int a;
	for (a = 63; a >= 0; a--)
	{
		if ((n >> a) & 1)
	{
		_putchar('1');
	}
	else
		_putchar('0');
	}

}
