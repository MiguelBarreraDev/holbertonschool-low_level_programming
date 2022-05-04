#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Search a value in a sorted array of integers using the
 * Jump search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: The number of elements in array
 * @value: Is the value to search for
 *
 * Return: The first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = 0, initial = 0, end = 0, i = 0;

	if (!array || size == 0 || value < array[0])
		return (-1);

	jump = sqrt(size);

	while (array[end] < value && end < size)
	{
		initial = end;
		end += jump;
		printf("Value checked array[%ld] = [%d]\n", initial, array[initial]);
		if (end >= size || array[end] > value)
			printf("Value found between indexes [%ld] and [%ld]\n", initial, end);
	}

	for (i = initial; i <= end && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
