#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Function that frees dogs
 *
 * @d: Pointer to be checked
 *
 * Return: Always 0 (Success)
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);

	free(d);
}
