#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: string
 * @s2: string
 *
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int pos, size_1 = 0, size_2 = 0, size = 0;
	char *new_str;


	while (s1 != 0 && *(s1 + size_1))
		size_1++;
	while (s2 != 0 && *(s2 + size_2))
		size_2++;
	size = size_1 + size_2 + 1;
	new_str = malloc(sizeof(char) * size);
	if (new_str == 0)
		return (new_str);
	*(new_str + size - 1) = '\0';

	for (pos = 0; pos < size - 1; pos++)
	{
		if (pos < size_1 && s1 != 0)
		{
			*(new_str + pos) = *(s1 + pos);
			continue;
		}
		*(new_str + pos) = *(s2++);
	}
	*(new_str + size - 1) = '\0';
	return (new_str);
}
