#include "main.h"

/**
 * print_rev - Function that prints a string in reverse,
 * followed by a new line
 *
 * @s: Pointer that prints a string in reverse
 *
 * Return: Always 0 (Success)
 *
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	s += length - 1;

	while (length > 0)
	{
		_putchar(*s);
		s--;
		length--;
	}
	_putchar('\n');
}
