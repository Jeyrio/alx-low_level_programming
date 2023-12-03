#include "main.h"

/**
 * puts_half - Function that prints half of a string, followed by a new line
 * @str: Pointer to print half of a string
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int length = 0;
	int second_half_string, i;

	while (str[length] != '\0')
	{
		length++;
	}

	second_half_string = (length - 1) / 2;

	for (i = (second_half_string + 1); i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
