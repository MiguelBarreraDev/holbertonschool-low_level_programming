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
	unsigned int -> 0 - 255
	int ->
	if( < 0)
	{
		n *= -1;
		idNegative = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	123 -> 321
	while (n > 0)
	{
		digit = n % 10;
		n /= 10;
		result = result * 10 + digit;
	}
	321
	if (idNegative == 1)
		_putchar('-');
	321
	while (result > 0)
	{
		digit = result % 10;
		result /= 10;
		_putchar(digit + '0');
	}
}
