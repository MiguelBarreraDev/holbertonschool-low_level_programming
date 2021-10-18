#include "main.h"
/**
 * _strpbrk -  function locates the first occurrence
 * in the string s of any of the bytes in the string accept
 *
 * @s: target pointer
 * @accept: origin pointer
 *
 * Return: pinter if matches. NULL if no matche
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int pos;

	while (*s)
	{
		for (pos = 0; accept[pos]; pos++)
		{
			if (*s == accept[pos])
				return (s);
		}
		s++;
	}
	return ('\0');
}
