#include "main.h"
#include <stddef.h>
/**
 * print_binary - 
 * @n: i
 */

void print_binary(unsigned long int n)
{
unsigned long int b;
int a;
int j = 0;
	for (a = 63; a >= 0; a--)
	{
		b = n >> a;
		if (b & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
		{	
			_putchar('0');
		}
	}

	if (j == 0)
	_putchar('0');
}
