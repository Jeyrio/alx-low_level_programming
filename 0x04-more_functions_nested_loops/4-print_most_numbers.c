#include "main.h"

/**
 * print_most_numbers - Function that prints the numbers, from 0 to 9
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		if (c != 2 && c != 4)
		{
			_putchar(c + '0');
		}
		c++;
	}
	_putchar('\n');
}
