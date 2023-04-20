#include "3-calc.h"
int op_add(int i, int j);
int op_sub(int i, int j);
int op_mul(int i, int j);
int op_div(int i, int j);
int op_mod(int i, int j);

/**
 * op_add - function
 * @i: i
 * @j: j
 * Return: return
 */
int op_add(int i, int j)
{
return (i + j);
}
/**
 * op_sub - function
 * @i: i
 * @j: j
 * Return: return
 */
int op_sub(int i, int j)
{
return (i - j);
}
/**
 * op_mul - function
 * @i: i
 * @j: j
 * Return: return
 */
int op_mul(int i, int j)
{
return (i * j);
}
/**
 * op_div - function
 * @i: i
 * @j: j
 * Return: return
 */
int op_div(int i, int j)
{
return (i / j);
}
/**
 * op_mod - function
 * @i: i
 * @j: j
 * Return: return
 */
int op_mod(int i, int j)
{
return (i % j);
}
