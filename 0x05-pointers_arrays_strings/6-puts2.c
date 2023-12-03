#include "main.h"

/**
 * puts2 - Function that prints every other character of a string
 * starting with the first character, followed by a new line
 *
 * @str: Pointer to print every other character of a string
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
