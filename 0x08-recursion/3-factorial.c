#include "main.h"
/**
 * factorial - get the facotiral of a number
 *
 * @n: integer number
 *
 * Return: factorial of the given number
 */
int factorial(int n)
{
	int res = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	res = n * factorial(n - 1);
	return (res);
}
