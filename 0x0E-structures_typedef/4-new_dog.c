#include "dog.h"
#include <stdio.h>
#include "string.h"
#include <stdlib.h>

/**
 * *new_dog - Function that creates a new dog
 *
 * @name: first memeber
 * @age: second member
 * @owner: third member
 *
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t name_len = (name != NULL) ? strlen(name) : 0;
	size_t owner_len = (owner != NULL) ? strlen(owner) : 0;

	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = (char *)malloc((name_len + 1) * sizeof(char));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = (char *)malloc((owner_len + 1) * sizeof(char));

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
