#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "string.h"

/**
 * *string_nconcat - Function that concatenates two string
 *
 * @s1: Destination
 * @s2: Source
 * @n: integer to be checked
 *
 * Return: Pointer to a newly allocated space in memory
 * which contains s1 followed by the first n bytes of s2
 * and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	size_t length1, length2, total_length;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length1 = (s1 != NULL) ? strlen(s1) : 0;
	length2 = (s2 != NULL) ? strlen(s2) : 0;

	if (n >= length2)
	{
		n = length2;
	}

	total_length = length1 + n;

	a = malloc((total_length + 1) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	strcpy(a, s1);

	strncat(a, s2, n);

	return (a);
}
