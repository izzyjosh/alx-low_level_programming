#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D array
 * @grid: grid to free
 * @height: number of rows of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
