#include "main.h"
/**
 * print_times_table - Function that prints the n times table, starting with 0
 * @n: The character to be checked
 *
 * Return: Always 0 (Success)
 *
 */
void print_times_table(int n)
{
	int row, column, result;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (row = 0; row <= n; row++)
	{
		_putchar('0');
		for (column = 1; column <= n; column++)
		{
			_putchar(',');
			_putchar(' ');

			result = row * column;

			if (result <= 99)
			{
				_putchar(' ');
			}

			if (result <= 9)
			{
				_putchar(' ');
			}

			if (result >= 100)
			{
				_putchar((result / 100) + '0');
				_putchar((result / 10) % 10 + '0');
			}
			else if (result <= 99 && result >= 10)
			{
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
