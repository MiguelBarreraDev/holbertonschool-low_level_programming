#include "search_algos.h"
/**
 * linear_search - Search a value in an array of integers
 * using the linear search algorithm.
 * - If value is not present in array or if array is NULL,
 *   your function must return -1
 * - Everytime you compare a value in the array to the value
 *   you are searching, you have to print this value
 *
 * @array: Pointer to the first element of the array
 * @size: Is the number of elements in array
 * @value: The value to search for
 *
 * Return: First index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			break;
	}

	if (index == size)
		index = -1;

	return (index);
}
