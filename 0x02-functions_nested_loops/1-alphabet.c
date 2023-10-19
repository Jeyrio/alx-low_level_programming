#include "main.h"
/**
 * print_alphabet - Function that prints alphabet in lowercase with a new line
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
}
