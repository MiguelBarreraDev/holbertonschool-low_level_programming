#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: ascii code of the character
 * Return: 1 if is uppercase. 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
