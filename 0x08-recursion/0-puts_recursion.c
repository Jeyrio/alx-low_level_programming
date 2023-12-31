#include "main.h"

/**
 * _puts_recursion - Function that prints a string, followed by a new line
 * @s: Pointer to the string to be printed
 *
 *  Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
