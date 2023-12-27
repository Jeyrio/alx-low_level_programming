#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - Function that creates an array of integers
 *
 * @min: minimum integer to be checked
 * @max: maximum integer to be checked
 *
 * Return: Always 0 (Success)
 *
 */
int *array_range(int min, int max)
{
	int *grid, i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	grid = malloc(size * sizeof(int));
	{
		if (grid == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			grid[i] = min++;
		}
	}
	return (grid);
}
