#include "search_algos.h"

void print_array(int *array, int initial, int end);
int binary_algo(int *array, size_t initial, size_t end, int value);

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
 * binary_algo - Search value in a sorted array of integers using the
 * Binary search algorithm.
 *
 * @array: Pointer to the first element of the array
 * @initial: Starting position of the range to search for in the array
 * @end: Final position of the range to search for in the array
 * @value: The value to search for
 *
 * Return: The index where value is located.
 * (-1)
 * If value is not present in array
 * If the array is NULL
 */
int binary_algo(int *array, size_t initial, size_t end, int value)
{
	size_t pivot = 0;

	if (array[initial] == value)
		return (initial);
	if (array[end] == value)
		return (end);
	while ((int)(end - initial) >= 0)
	{
		print_array(array, initial, end);
		pivot = initial  + (end - initial) / 2;
		if (array[pivot] == value)
			return (pivot);
		else if (array[pivot] > value)
			end = pivot - 1;
		else if (array[pivot] < value)
			initial = pivot + 1;
	}

	return (-1);
}

/**
 * exponential_search - Search a value in a sorted array of integers
 * using the Exponential search algorithm.
 *
 * @array: Pointer to the first element of the array
 * @size: The number of elements of the array
 * @value: The value to search for
 *
 * Return: First index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t pivot = 1, initial = 0, end = 0;

	if (!array || size == 0 || value < array[0] || value > array[size])
		return (-1);

	if (array[0] == value)
		return (0);

	while (pivot < size && array[pivot] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", pivot, array[pivot]);
		pivot *= 2;
	}

	initial = pivot / 2;
	end = pivot < size ? pivot : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", initial, end);
	return (binary_algo(array, initial, end, value));
}
