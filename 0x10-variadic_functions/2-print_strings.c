#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: constant character
 * @n: contant integer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	int count = n;
	va_list ptr;

	va_start(ptr, n);
	for (; count > 0; count--)
	{
		str = va_arg(ptr, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (!separator)
			continue;
		if (count > 1)
			printf("%s", separator);
	}
	putchar(10);
	va_end(ptr);
}
