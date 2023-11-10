#include "main.h"

/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int c = 0;
	int i;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
