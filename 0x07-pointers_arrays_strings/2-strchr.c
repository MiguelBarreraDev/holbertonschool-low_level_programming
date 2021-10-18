#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string.
 *
 * @s: pointer
 * @c: character to locate
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	unsigned int pos = 0;

	while (*(s + pos))
	{
		if (*(s + pos) == c)
			return (s + pos);
		pos++;
	}
	return (NULL);
}
