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
	int pos = 0;

	if (cmp == NULL || array == NULL)
		return;
	if (size <= 0)
		return (-1);

	for (; pos < size; pos++)
	{
		if (cmp(*(array + pos)))
			return (pos);
	}
	return (-1);
}
