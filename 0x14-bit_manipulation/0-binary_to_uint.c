#include "main.h"
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
	unsigned int new_number = 0, len = 0;

	if (b == NULL)
		return (0);

	len = strlen(b) - 1;
	for (; *(b + index); index++)
	{
		if (*(b + index) != '0' && *(b + index) != '1')
			return (0);
		new_number += (*(b + index) - 48) * (pow(2, len));
		len--;
	}

	return (new_number);
}
