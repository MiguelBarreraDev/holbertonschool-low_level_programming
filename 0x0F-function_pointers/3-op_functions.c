#include "function_pointers.h"
#include "3-calc.h"
/**
 * op_add - summing function
 *
 * @a: integer
 * @b: integer
 *
 * Return: integer(succes)
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - remaining function
 *
 * @a: integer
 * @b: integer
 *
 * Return: integer(succes)
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply function
 *
 * @a: integer
 * @b: integer
 *
 * Return: integer(succes)
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - dividing function
 *
 * @a: integer
 * @b: integer
 *
 * Return: integer(succes)
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function that gets module
 *
 * @a: integer
 * @b: integer
 *
 * Return: integer(succes)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
