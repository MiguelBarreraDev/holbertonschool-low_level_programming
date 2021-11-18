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
	unsigned long int mask = 2147483648; /*10000000000000000000000000000000*/
	int band = 0;

	while (mask > 0)
	{
		if (((mask & n) == 0) && (mask == 0x01 || band != 0))
		{
			_putchar(48);
		}
		else if ((mask & n) != 0)
		{
			_putchar(49);
			band = 1;
		}
		mask = mask >> 1;
	}
}
