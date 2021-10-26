#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that return a pointer to a
 * 2 dimisional array of integer
 *
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr, row = height, col = width;

	if (width < 1 || height < 1)
		return ('\0');
	/*------------------ Reserving memory ---------------------*/
	arr = (int **)malloc(sizeof(int *) * row);
	if (arr == 0)
	{
		free(arr);
		return ('\0');
	}
	for (row = 0; row < height; row++)
		*(arr + row) = (int *)malloc(sizeof(int) * col);
	if (*arr == 0)
	{
		free(arr);
		for (row = 0; row < height; row++)
			free(*(arr + pos));
		return ('\0');
	}
	/*---------------------------------------------------------*/
	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
			*(*(arr + row) + col) = 0;
	}



	return (arr);
}
