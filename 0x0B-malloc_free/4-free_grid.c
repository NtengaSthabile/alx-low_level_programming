#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -alloc-grid of intergers
 * @grid: The addredss of the two dimesional grid.
 * @height of grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
