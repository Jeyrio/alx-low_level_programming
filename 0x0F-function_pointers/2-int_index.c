#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Function that searches for an integer
 *
 * @array: Array of integer
 * @size: Size of array
 * @cmp: Function pointer
 *
 * Return: index of the first element otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (i);
}
