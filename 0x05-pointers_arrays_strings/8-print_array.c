#include <stdio.h>
#include "main.h"

/**
 * print_array - Function that prints n elements of an array
 * of integers, followed by a new line.
 *
 * @a: Pointer to print element of an array of integers
 * @n: The integer of elements of the array to be printed
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("\n");
}
