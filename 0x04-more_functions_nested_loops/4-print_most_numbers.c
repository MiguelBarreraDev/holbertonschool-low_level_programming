#include "main.h"
/**
 * print_numbers - prints the numbers from 0 to 9,
 * Do not print 2 and 4
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar((num % 10) + '0');
	}
	_putchar(10);
}
