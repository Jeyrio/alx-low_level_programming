#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Function that allocates memory using malloc
 *
 * @b: integer to be checked
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
