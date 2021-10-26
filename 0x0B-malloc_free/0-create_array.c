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
	char *str = malloc(sizeof(int) * size);

	if (size == 0)
		return ('\0');
	while (size)
	{
		*(str + size - 1) = c;
		size--;
	}
	return (str);
}
