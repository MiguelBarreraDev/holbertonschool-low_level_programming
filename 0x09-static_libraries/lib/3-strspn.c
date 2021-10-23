#include "main.h"
/**
 * _strspn - function that get length of a prefix substring
 *
 * @s: pointer
 * @accept:
 *
 * Return: bytes number
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int pos, n_Bts = 0, band = 0;

	do {
		for (pos = 0; accept[pos]; pos++)
		{
			if (*s == accept[pos])
			{
				n_Bts++;
				band = 1;
				break;
			}
			else
				band = 0;

		}
		if (band == 0)
			break;
	} while (*s++);
	return (n_Bts);
}
