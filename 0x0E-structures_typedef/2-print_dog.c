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

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
