#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 *
 * @min: number
 * @max: number
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	int pos, index = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (pos = min; pos <= max; pos++)
	{
		*(arr + index) = pos;
		index++;
	}
	return (arr);
}
