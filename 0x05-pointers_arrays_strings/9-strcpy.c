#include "main.h"
/**
 * _strcpy - prints half of a string
 *
 * @dest: pointer to char dest
 * @src: pointer to char src
 *
 * Return: Pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	int pos = 0;

	while (src[pos])
	{
		dest[pos] = src[pos];
		pos++;
	}
	return (dest);
}
