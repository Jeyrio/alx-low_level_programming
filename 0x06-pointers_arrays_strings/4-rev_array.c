#include <stdio.h>

/**
 * reverse_array - Function that reverses the content of an array of integers.
 *
 * @a: Pointer to the array
 * @n: Number of elements of the array
 *
 * Return: Always 0(Success)
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while(start < end)
	{
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
