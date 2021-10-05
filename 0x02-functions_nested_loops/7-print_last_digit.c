#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: is a integer number
 *
 * Return: Always last digit(succes)
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	lastDigit += 48;
	_putchar(lastDigit);
	return (lastDigit);
}
