#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
	size_t min_size;

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

	min_size = old_size < new_size ? old_size : new_size;

	if (ptr1)
	{
		memcpy(ptr1, ptr, min_size);
		free(ptr);
	}
	return (ptr1);
}
