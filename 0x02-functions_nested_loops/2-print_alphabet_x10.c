#include "main.h"
/**
 * print_alphabet_x10 - Function that prints 10 times the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');
	}
}
