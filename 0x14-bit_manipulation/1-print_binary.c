#include "main.h"
uint _pow(uint base, uint exponent);
/**
 * print_binary - function that prints the binary
 * representation of a number
 *
 * @n: number to represent
 */
void print_binary(unsigned long int n)
{
	uint exp1 = 0, exp2 = 0, pows_2 = 0, save;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	while (n > 0)
	{
		pows_2 = 1;
		exp1 = 1;
		exp2 = 1;
		save = 0;
		while (pows_2 <= n)
		{
			save = pows_2;
			pows_2 = _pow(2, exp1);
			exp1++;
		}
		_putchar(49);
		n -= save;
		pows_2 = 0;
		while (pows_2 <= n)
		{
			pows_2 = _pow(2, exp2);
			exp2++;
		}
		exp1 -= exp2;
		while (exp1 > 0)
		{
			_putchar(48);
			exp1--;
		}
	}
}
/**
 * _pow - Gets the result of raising base^exponent
 *
 * @base: self-describing
 * @exponent: self-describing
 *
 * Return: a unsigned int
 */
uint _pow(uint base, uint exponent)
{
	if (exponent == 0)
		return (1);
	return (base * _pow(base, exponent - 1));
}
