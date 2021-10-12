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
	char *save = src, *saveInitialPos = dest;

	while (*(save++))
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = saveInitialPos;
	return (dest);
}
