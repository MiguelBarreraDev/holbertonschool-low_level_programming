#include "main.h"
/**
 * _islower -  checks for lowercase character
 *
 * @c: Is in ASCII code the character
 *
 * Return: 1 for lowecarse character. 0 for the rest.
 */
int _islower(int c)
{
	int band;

	if (c >= 97 && c <= 122)
		band = 1;
	else
		band = 0;
	return (band);
}
