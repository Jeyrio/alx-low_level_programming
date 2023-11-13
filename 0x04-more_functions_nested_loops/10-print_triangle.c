#include "main.h"

/**
 * print_triangle - Function that prints a triangle, followed by a new line
 * @size: The character that needs to be checked
 *
 * Return:
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, space;

		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space > 0; space--)
			{
				_putchar(' ');
			}

			for (space = 1; space <= row; space++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
