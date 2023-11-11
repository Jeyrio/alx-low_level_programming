#include "main.h"

/**
 * print_square - Function that prints a square, followed by a new line
 * @size: The size to be checked
 *
 * Return: Always  0 (Success)
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, column;

		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
