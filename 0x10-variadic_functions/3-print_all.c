#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function
 * @format: list arguments
 */
void print_all(const char * const format, ...)
{
int a = 0;
char *str, *sep = "";
va_list ls;

	va_start(ls, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ls, double));
					break;
				case 's':
				str = va_arg(ls, char *);
					if (!str)
					str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					a++;
			continue;
			}
		sep = ", ";
		a++;
		}
	}

printf("\n");
va_end(ls);
}
