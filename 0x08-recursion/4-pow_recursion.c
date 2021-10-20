#include "main.h"
/**
 * _pow_recursion - get the power of a number
 * @x: base
 * @y: exponent
 *
 * Return: x reaised to the power of y. -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	int res = 1;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	res = x * _pow_recursion(x, y - 1);
	return (res);
}
