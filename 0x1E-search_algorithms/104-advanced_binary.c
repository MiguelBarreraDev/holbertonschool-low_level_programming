#include "search_algos.h"

void print_array(int *array, int initial, int end);

/**
 * print_array - Print all values of an array in a given range.
 *
 * @array: Matrix to print
 * @initial: From where the matrix will be printed
 * @end: Up to where the matrix will be printed
 *
 * Return: None
 */
void print_array(int *array, int initial, int end)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = initial; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}

/**
 * my_binary - Search value in a sorted array of integers using the
 * Binary search algorithm.
 *
 * @array: Pointer to the first element of the array
 * @initial: The first position
 * @end: The end position
 * @value: The value to search for
 *
 * Return: The index where value is located
 */
int my_binary(int *array, int initial, int end, int value)
{
	int pivot = 0;

	pivot =  initial + ((end - initial) / 2);

	if (initial >= end)
		return (-1);

	print_array(array, initial, end);
	if (array[pivot] == value)
		return (pivot);
	else if (array[pivot] > value)
		return (my_binary(array, initial, pivot - 1, value));
	else
		return (my_binary(array, pivot + 1, end, value));

	return (-1);
}

/**
 * advanced_binary - Search value in a sorted array of integers using the
 * Binary search algorithm.
 *
 * @array: Pointer to the first element of the array
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (my_binary(array, 0, size - 1, value));
}
