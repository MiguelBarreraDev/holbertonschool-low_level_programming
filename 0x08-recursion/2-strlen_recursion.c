#include "main.h"
/**
 * _strlen_recursion - get the length of a string
 *
 * @s: string
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s++ == '\0')
		return (0);

	len += _strlen_recursion(s);
	len++;
	return (len);
}
