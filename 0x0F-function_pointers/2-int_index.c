#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 *
 * @array: pointer to int
 * @size: size of the array
 * @cmp: pointer to function
 *
 * Return: index(succes);
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int pos;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (pos = 0; pos < size; pos++)
	{
		if (cmp(*(array + pos)) != 0)
			return (pos);
	}
	return (-1);
}
