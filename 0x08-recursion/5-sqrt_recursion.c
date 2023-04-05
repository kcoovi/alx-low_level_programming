#include "main.h"
int helper(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (helper(n, 1));
}

/**
 * helper - returns the natural square root of a number
 * @n: number to calculate the square root of
 * @i: whatever
 * Return: the resulting square root
 */
int helper(int n, int i)
{
	if (i * i == n)
	return (i);
	if (i * i >)
	return (-1);
	return (helper(n, i + 1));
}
