#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the 2d grid previously created by alloc_grid
 * @grid: the 2D grid to free
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
