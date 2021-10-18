#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that get length of a prefix substring
 *
 * @s: pointer
 * @accept:
 *
 * Return: bytes number
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int pos_sb = 0, pos_s = 0, largest_pos = 0;

	while (accept[pos_sb])
	{
		pos_s = 0;
		while (s[pos_s])
		{
			if (accept[pos_sb] == s[pos_s])
			{
				if (largest_pos < pos_s)
					largest_pos = pos_s;
				break;
			}
			pos_s++;
		}
		pos_sb++;
	}
	return (largest_pos + 1);
}
