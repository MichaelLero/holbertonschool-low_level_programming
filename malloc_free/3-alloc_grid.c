#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a two dimensional array
 * of integers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointers in grid pattern or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int o;

	i = 0;
	o = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			while (o < i)
			{
				free(grid[o]);
				o++;
			}

			free(grid);
			return (NULL);
		}

		i++;
	}

	i = 0;

	while (i < height)
	{
		o = 0;
		while (o < width)
		{
			grid[i][o] = 0;
			o++;
		}

		i++;
	}

	return (grid);

}
