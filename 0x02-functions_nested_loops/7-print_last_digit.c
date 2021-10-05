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
	int lastDigit, temp;

	lastDigit = n % 10;
	lastDigit = lastDigit < 0 ? lastDigit * -1 : lastDigit;
	temp = lastDigit;
	_putchar(lastDigit + 48);/* character */
	return (temp); /* Integer */
}
