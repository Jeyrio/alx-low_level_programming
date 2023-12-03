#include <stdio.h>
#include "main.h"

/**
 * print_array - Function that prints n elements of an array
 * of integers, followed by a new line.
 *
 * @a: Pointer to the start of the array
 * @n: The integer of elements of the array to be printed
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return; /** Exit the function if there are no element to print**/
	}

	printf("%d", *a);

	for (i = 1; i < n; i++)
	{
		printf(", %d", *(a + i));
	}
	printf("\n");
}
