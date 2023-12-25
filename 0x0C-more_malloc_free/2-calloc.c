#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - Function that allocates memory for an array, using malloc
 *
 * @nmemb: Integer to be checked
 * @size: Size to be checked
 *
 * Return: A pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;
	size_t mul = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(mul);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < mul; i++)
	{
		a[i] = 0;
	}
	return (a);
}
