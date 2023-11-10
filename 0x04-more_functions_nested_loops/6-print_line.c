#include "main.h"

/**
 * print_line - Function that draws a straight line in the terminal
 * @n: The character to be checked
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
	{
		_putchar('_');
		n--;
	}
		_putchar('\n');
	}
}
