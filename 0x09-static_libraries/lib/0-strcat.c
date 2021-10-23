#include "main.h"
#include <stdio.h>
/**
 * _strcat - function
 *
 * @dest: pointer
 * @src: pointer
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src/*, __attribute__((unused)) int n*/)
{
	int s1 = 0, s2 = 0;

	while (dest[s1])
		s1++;
	while (src[s2])
	{
		dest[s1] = src[s2];
		s1++;
		s2++;
	}
	dest[s1] = '\0';
	return (dest);
}
