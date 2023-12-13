#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 *
 * @grid: Grid to be freed
 * @height: Height of the grid
 *
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);

	grid = NULL;
}
