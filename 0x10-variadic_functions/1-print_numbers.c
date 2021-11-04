#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @separator: constant character
 * @n: constant integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int count = n;
	va_list ptr;

	va_start(ptr, n);

	for (; count > 0; count--)
	{
		printf("%d", va_arg(ptr, int));
		if (separator == NULL)
			continue;
		if (count > 1)
			printf("%s", separator);
	}
	putchar(10);
	va_end(ptr);
}
