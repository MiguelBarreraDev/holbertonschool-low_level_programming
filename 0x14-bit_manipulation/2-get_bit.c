#include "main.h"
/**
 * get_bit - function that returns the value
 * of a bit at a given index
 *
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: number to go
 *
 * Return: bit balue
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if (index == 0)
		return ((n & 1) ? 1 : 0);

	return (get_bit(n >> 1, index - 1));
}
