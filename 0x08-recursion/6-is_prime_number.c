#include "main.h"

/**
 * check_prime - Calculate if its a prime
 * @a: input
 * @b: divisor
 *
 * Return: Always 0 (Success)
 */
int check_prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (check_prime(a, b + 1));
}

/**
 * is_prime_number - Function that returns if its a prime
 * @n: The input number
 *
 * Return: 1 if a prime or 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
