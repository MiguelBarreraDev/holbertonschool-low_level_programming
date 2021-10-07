#include "main.h"

/**
 * _isdigit - checks for a digit(0 trough 9)
 * @c: ascii code of the character
 * Return: 1 if is a digit. 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
