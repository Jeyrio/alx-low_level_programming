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
	char *ptr1;
	char *old_ptr = ptr;
	size_t i, min_size;

	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		return (ptr1);
	}

	else if (new_size == 0)
	{
		free(ptr);
		return (ptr);
	}

	else if (new_size == old_size)
	{
		return (ptr);
	}

	ptr1 = malloc(new_size);

	if (ptr1 == NULL)
	{
		return (NULL);
	}

	if (new_size > old_size)
		min_size = old_size;

	for (i = 0; i < min_size; i++)
	{
		ptr1[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr1);
}
