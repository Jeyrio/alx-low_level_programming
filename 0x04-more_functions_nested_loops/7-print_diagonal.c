#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on th terminal
 * @n: The character to be checked
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, space;

		for (row = 0; row < n; row++)
		{
			for (space = 0; space < row; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
