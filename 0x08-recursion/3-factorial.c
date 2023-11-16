#include "main.h"

/**
 * factorial - Function that return the factorial of a given number
 * @n: The character to be checked
 *
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * !(n-1));
	}
}
