#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function
 * @separator: seperator
 * @n: variable
 * @...: A variable
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nu;
unsigned int i;
va_start(nu, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(nu, int));

	if (index != (n - 1) && separator != NULL)
	printf("%s", separator);
	}

printf("\n");
va_end(nu);
}
