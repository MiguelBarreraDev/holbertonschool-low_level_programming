#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - function that prints anything.
 *
 * @format: constant pointer to char
 */
void print_all(const char * const format, ...)
{
	int index_for = 0;
	char letter_for = 0, *save_str;
	va_list ptr;

	va_start(ptr, format);
	while (format != NULL && *(format + index_for))
	{
		letter_for = *(format + index_for);
		switch (letter_for)
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%i", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				save_str = va_arg(ptr, char *);
				save_str = (save_str == NULL) ? "(nil)" : save_str;
				printf("%s", save_str);
				break;
			default:
				letter_for = '0';
				break;
		}
		if (*(format + index_for + 1) != '\0' && letter_for != '0')
		{
			printf(", ");
		}
		index_for++;
	}
	putchar(10);
	va_end(ptr);
}
