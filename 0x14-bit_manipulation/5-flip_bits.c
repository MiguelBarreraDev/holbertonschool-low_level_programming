#include "main.h"
/**
 * flip_bits - function that returns the number of
 * bits you would need to flip to get from
 * one number to another.
 *
 * @n: starting number
 * @m: final number
 *
 * Return: Bit numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_1 = 0, bit_2 = 0, count = 0;

	if (m == 0 && n == 0)
		return (0);

	bit_1 = (n & 1) ? 1 : 0;
	bit_2 = (m & 1) ? 1 : 0;

	count += flip_bits(n >> 1, m >> 1);
	if (bit_1 != bit_2)
		count++;

	return (count);
}
