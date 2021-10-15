#include "main.h"
#include <stdio.h>
/**
 * _strncpy - function
 *
 * @dest: pointer
 * @src: pointer
 * @n: number
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, __attribute__((unused)) int n)
{
	int pos = 0;

	while (src[pos])
	{
		if (pos >= n)
			break;
		dest[pos] = src[pos];
		pos++;
	}
	return (dest);
}
