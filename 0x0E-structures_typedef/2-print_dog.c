#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Function that prints a struct dog
 *
 * @d: Pointer to struct dog
 *
 * Return: Always 0 (Success)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
}
