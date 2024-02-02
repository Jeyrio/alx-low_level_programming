#include "main.h"

/**
 * _isdigit - Function that checks for a digit (0 through 9)
 * @c: The integer to be checked
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
