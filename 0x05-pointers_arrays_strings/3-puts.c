#include "main.h"

/**
 * _puts - Function that prints a string, followed by a new line to stdout
 *
 * @str: Pointer to print a string
 *
 * Return: Always 0 (Success)
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
