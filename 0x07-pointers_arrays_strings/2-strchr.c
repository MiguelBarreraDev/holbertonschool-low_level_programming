#include "main.h"
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

	do {
		if (*s == c)
			break;
	} while (*s++);
	return (s);
}
