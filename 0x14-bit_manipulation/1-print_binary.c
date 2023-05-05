#include "main.h"
#include <stddef.h>
/**
 * print_binary - function*
 * @n: integer
 */

void print_binary(unsigned long int n)
{
int a, j = 0;
unsigned long int b;

	for (a = 63; a >= 0; a--)
	{
		b = n >> a;

		if (b & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
		_putchar('0');
	}
	if (!j)
	_putchar(0);
}
