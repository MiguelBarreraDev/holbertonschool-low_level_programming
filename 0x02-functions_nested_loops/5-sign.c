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
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
