#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x
 * raised to the power of y
 *
 * @x: The base integer that will be raised to a power
 * @y: The exponent by which the base number will be raised
 *
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
