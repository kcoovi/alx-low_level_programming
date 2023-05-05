#include "main.h"
/**
 * get_endianness - function
 * Return: return
 */
int get_endianness(void)
{
unsigned int b = 1;
char *s = (char *)&b;
return (*s);
}
