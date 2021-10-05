#include "main.h"
/**
 * print_sign - Write a function that prints the sign of a number.
 *
 * @n: is a integer number
 *
 * Return: 1 for n greater than zero. 0 for n equal zero.
 * -1 for n less than zero
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
		return (1);
	else if (n == 0)
		_putchar('0');
		return (48);
	else
		_putchar('-')
		return (-1);
}
