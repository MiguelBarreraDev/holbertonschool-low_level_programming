#include "main.h"
/**
 * _memcpy - function that fills memory with a constant byte.
 *
 * @dest: target pointer
 * @src: origin pointer
 * @n: bytes number
 *
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int pos = 0;

	while (pos < n)
	{
		*(dest + pos) = *(src + pos);
		pos++;
	}
	return (dest);
}
