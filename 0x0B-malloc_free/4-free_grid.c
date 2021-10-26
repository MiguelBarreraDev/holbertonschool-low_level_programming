#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 *
 * @grid: 2 dimensional grid previously created
 * @height: number of rows
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
	{
		free(*(grid + row));
	}
	free(grid);
}
