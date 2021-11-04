#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that sum all parameters
 *
 * @n: const integer
 *
 * Return: sum all
 */
int sum_them_all(const unsigned int n, ...)
{
	int sumAll = 0, count = n;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (; count > 0; count--)
		sumAll += va_arg(ptr, int);

	va_end(ptr);

	return (sumAll);
}
