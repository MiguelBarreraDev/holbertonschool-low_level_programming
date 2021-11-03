#include "function_pointers.h"
/**
 * array_iterator -  function that executes a function
 * given as a parameter on each element of an array
 *
 * @array: pointer to int
 * @size: size of the array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int pos = 0;

	if (array == NULL || action == NULL)
		return;
	for (; pos < size; pos++)
		action(*(array + pos));
}
