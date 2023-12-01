#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 *
 * @a: The integer to be swapped
 * @b: The integer to be swapped
 *
 * Return: Always 0 (Success)
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
