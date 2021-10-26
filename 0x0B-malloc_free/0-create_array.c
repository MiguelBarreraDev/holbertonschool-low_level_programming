#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 *
 * @size: size of the array
 * @c: character for initializes
 *
 * Return: pointer to array. NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int pos;
	char *str = malloc(sizeof(char) * size);

	if (size == 0)
		return ('\0');
	for (pos = 0; pos < size; pos++)
	{
		*(str + pos) = c;
	}
	return (str);
}
