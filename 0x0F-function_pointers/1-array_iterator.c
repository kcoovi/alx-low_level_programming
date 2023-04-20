#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function
 * @array: the array
 * @size: size
 * @action: pointer
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
	return;

	for (a = 0; a < size; a++)
	{
	action(array[a]);
	}
}
