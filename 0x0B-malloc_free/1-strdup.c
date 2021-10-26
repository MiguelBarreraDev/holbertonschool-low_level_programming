#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory
 *
 * @str: string to duplicate
 *
 * Return: a pointer
 */
char *_strdup(char *str)
{
	unsigned int pos, size = 0;
	char *new_str;

	while (*(str + size))
	{
		size++;
	}

	size += 1;
	new_str = malloc(sizeof(char) * size);

	if (str == 0 || new_str == 0)
		return ('\0');

	for (pos = 0; pos < size; pos++)
	{
		*(new_str + pos) = *(str + pos);
	}
	return (new_str);
}
