#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *_strdup - Funtion that return a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter.
 *
 * @str: Copy of the string
 *
 * Return: NULL if str is NULL or if insufficient memory was available
 * otherwise if successful return a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *str2;
	size_t length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	str2 = malloc((length + 1) * sizeof(char));

	if (str2 == NULL)
	{
		return (NULL);
	}

	strcpy(str2, str);

	return (str2);
}
