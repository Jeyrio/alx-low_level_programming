#include "main.h"
/**
 * print_sign - Function that prints the sign of a number
 *
 * @n: The character to be checked
 *
 * Return: 1 and prints + if the character is greater than zero
 * return 0 and prints 0 if the character is zero
 * return -1 and prints - if the character is less than zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}

	else
	{
		_putchar('-');

		return (-1);
	}
}
