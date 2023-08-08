#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array
 * @grid: 2D array
 * @height: integer argument
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid)
	{
		for (i = 0; i < height; ++i)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
