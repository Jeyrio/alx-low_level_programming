#include "main.h"
#include <string.h>

/**
 * _strncat - Function that concatenates two strings using n bytes
 *
 * @dest: Destination buffer
 * @src: Source
 * @n: number of characters
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
