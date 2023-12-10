#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *str_concat - Function that concatenates two strings
 *
 * @s1: destination
 * @s2: Source
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;

	size_t length1 = (s1 != NULL) ? strlen(s1) : 0;
	size_t length2 = (s2 != NULL) ? strlen(s2) : 0;

	s = malloc((length1 + length2 + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		strcpy(s, s1);
	}
	else
	{
		*s = '\0';
	}

	if (s2 != NULL)
	{
		strcat(s, s2);
	}

	return (s);
}
