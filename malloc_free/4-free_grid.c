#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a grid previously created by alloc_grid
 * @grid: pointer to grid
 * @height: number of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
