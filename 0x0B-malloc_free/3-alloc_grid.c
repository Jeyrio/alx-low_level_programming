#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - Function that returns a pointer to a
 * 2 dimensional array of integers
 *
 * @width:  width of the grid
 * @height: height of the grid
 *
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j; /*declare variable*/

	if (width <= 0 || height <= 0) /*check if width or height is 0 or negative*/
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL) /*return NULL on failure to allocate memory*/
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int)); /*allocate memory to an int*/
		{
			if (grid[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(grid[j]);
				}

				free(grid);
				return (NULL);
			}

			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
	}
	return (grid);
}
