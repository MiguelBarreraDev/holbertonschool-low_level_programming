#include "main.h"
/**
 * _memcpy - function that fills memory with a constant byte.
 *
 * @s: pointer
 * @c: character to locate
 * @n: bytes number
 *
 * Return: pointer dest
 */
char *_strchr(char *s, char c)
{
	unsigned int pos = 0;

	while (*(s + pos))
	{
		if (*(s + pos) == c)
			return(s + pos);
		pos++;
	}
	return ("NULL");
}
