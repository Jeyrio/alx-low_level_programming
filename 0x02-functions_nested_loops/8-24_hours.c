#include "main.h"
/**
 * jack_bauer - Function that prints every mins of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: Always 0 (Success)
 *
 */
void jack_bauer(void)
{
	int hour, mins;

	for (hour = 0; hour < 24; hour++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
