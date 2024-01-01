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
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
