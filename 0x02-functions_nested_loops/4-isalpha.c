#include "main.h"
/**
 * test_isalpha -  checks for lowercase or uppercase character
 *
 * @c: Is in ASCII code the character
 *
 * Return: 1 for lowecarse or uppercase character. 0 for the rest.
 */
int test_isalpha(int c)
{
	int band;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		band = 1;
	else
		band = 0;
	return (band);
}
