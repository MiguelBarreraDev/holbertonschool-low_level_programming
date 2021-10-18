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
	unsigned int pos_s = 0, pos_sb = 0;

	while (s[pos_s])
	{	pos_sb = 0;
		while (accept[pos_sb])
		{
			if (s[pos_s] == accept[pos_sb])
				return (s + pos_s);
			pos_sb++;
		}
		pos_s++;
	}
	return (s + pos_s);
}
