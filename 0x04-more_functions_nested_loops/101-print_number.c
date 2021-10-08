#include "main.h"

/**
 * print_number - prints an integer.
 * @n: is a integer number
 */

void print_number(int n)
{
	int idNegative, digit, result;

	idNegative = 0;
	result = 0;
	if (n < 0)
	{
		n *= -1;
		idNegative = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	while (n > 0)
	{
		digit = n % 10;
		n /= 10;
		result = result * 10 + digit;
	}
	if (idNegative == 1)
		_putchar('-');
	while (result > 0)
	{
		digit = result % 10;
		result /= 10;
		_putchar((unsigned int)digit + '0');
	}
}
