#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_realloc - Function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory allocation
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: Always 0 (Success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;
	char *source, *destination;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	ptr1 = malloc(new_size);

	if (ptr1 == NULL)
	{
		return (NULL);
	}

	source = (char *)ptr;
	destination = (char *)ptr1;

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			destination[i] = source[i];
	}
	else
	{
		for (i = 0; i < new_size; i++)
			destination[i] = source[i];
	}
	free(ptr);
	return (ptr1);
}
