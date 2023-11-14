#include "main.h"

/**
 * print_number - Function that prints an integer
 * @n: The character to be checked
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
