#include "main.h"
/**
 * _strncat - function
 *
 * @dest: pointer
 * @src: pointer
 * @n: number
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s1 = 0, s2 = 0;

	while (dest[s1])
		s1++;
	while (src[s2])
	{
		dest[s1] = src[s2];
		s1++;
		s2++;
		if (s2 >= n)
			break;
	}
	dest[s1] = '\0';
	return (dest);
}
