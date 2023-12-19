#include <stdlib.h>
#include "main.h"
#include "string.h"

/**
 * ch_free_grid - Entry point
 * @grid: input
 * @height: input
 */
void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * **strtow - Function that splits a string into words
 *
 * @str: Pointer to an array of string to be checked
 *
 * Return: Always 0 (Success)
 */
char **strtow(char *str)
{
	char **s;
	size_t c, height, i, j, al;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	{
		s = malloc((height + 1) * sizeof(char *));
	}

	if (s == NULL || height == 0)
	{
		free(s);
		return (NULL);
	}
	for (i = al = 0; i < height; i++)
	{
		for (c = al; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				al++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				s[i] = malloc((c - al + 2) * sizeof(char));
				if (s[i] == NULL)
				{
					ch_free_grid(s, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; al <= c; al++, j++)
			s[i][j] = str[al];
		s[i][j] = '\0';
	}
	s[i] = NULL;
	return (s);
}
