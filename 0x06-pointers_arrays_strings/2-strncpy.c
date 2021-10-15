#include "main.h"
/**
 * _strncpy - function
 *
 * @dest: pointer
 * @src: pointer
 * @n: number
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int pos = 0;

	while (src[pos] != '\0' && pos < n)
	{
		dest[pos] = src[pos];
		pos++;
	}

	while (pos < n)
	{
		dest[pos] = '\0';
		pos++;
	}

	return (dest);
}
