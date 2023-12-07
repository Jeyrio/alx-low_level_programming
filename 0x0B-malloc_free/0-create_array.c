#include <stdlib.h>
#include "main.h"

/**
 * *create_array - Function that create an array of chars and
 * initializes it with a specific char
 *
 * @size: Size of memory needed
 * @c: char to be checked
 *
 * Return: NULL if size is 0 or if it fails
 * otherwise return a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[size] = '\0';

	return (s);
}
