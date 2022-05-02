#include "search_algos.h"

void print_array(int *array, int initial, int end);
/**
 * binary_search - Search value in a sorted array of integers using the
 * Binary search algorithm.
 *
 * @array: Pointer to the first element of the array
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located.
 * (-1)
 * If value is not present in array
 * If the array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t pivot = 0, indice_a = 0, indice_b = 0;

	indice_a = 0;
	indice_b = size - 1;
	if (array[indice_a] == value)
		return (indice_a);
	if (array[indice_b] == value)
		return (indice_b);
	while ((int)(indice_b - indice_a) >= 0)
	{
		print_array(array, indice_a, indice_b);
		pivot = indice_a  + (indice_b - indice_a) / 2;
		if (array[pivot] == value)
			return (pivot);
		else if (array[pivot] > value)
			indice_b = pivot - 1;
		else if (array[pivot] < value)
			indice_a = pivot + 1;
	}

	return (-1);
}
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
