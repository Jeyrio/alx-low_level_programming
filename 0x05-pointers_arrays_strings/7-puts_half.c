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
	int second_half_string;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		second_half_string = length / 2;
	}
	else
	{
		second_half_string = (length - 1) / 2;
	}

	while (str[second_half_string] != '\0')
	{
		_putchar(str[second_half_string]);
		second_half_string++;
	}
	_putchar('\n');
}
