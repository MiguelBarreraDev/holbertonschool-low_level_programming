#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: pointer
 * @b: constant byte
 * @n: bytes number
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int pos = 0;

	while (pos < n)
	{
		*(s + pos) = b;
		pos++;
	}
	return (s);
}
