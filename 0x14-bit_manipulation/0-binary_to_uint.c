#include "main.h"
uint _pow(uint, uint);
/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int
 *
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 *	- there is one or more chars in
 *	the string b that is not 0 or 1
 *	- b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	uint new_number = 0, len = 0;

	if (b == NULL)
		return (0);

	len = strlen(b) - 1;
	for (; *(b + index); index++)
	{
		if (*(b + index) != '0' && *(b + index) != '1')
			return (0);
		new_number += (*(b + index) - 48) * (_pow(2, len));
		len--;
	}

	return (new_number);
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
