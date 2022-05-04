#include "search_algos.h"
/**
 * interpolation_search - Search a value in a sorted array of integers
 * using Interpolation search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: The value to search
 *
 * Return: The first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, pivot = 0;

	if (!array || size == 0 || value < array[low] || value > array[high])
		return (-1);

	while (low <= high)
	{
		pivot = low + ((value - array[low]) * ((high - low) / (array[high] - array[low])));
		printf("Value checked array[%d] = [%d]\n", pivot, array[pivot]);
		if (array[pivot] == value)
			return (pivot);
		else if (array[pivot] > value)
			high = pivot - 1;
		else
			low = pivot + 1;
	}

	return (-1);
}
