#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - Function that concatenates two strings
 *
 * @dest: Destination buffer
 * @src: Source
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	strcat(dest, src);

	for (i = 0; dest[i] != '\0'; i++)
	{
		putchar(dest[i]);
	}
	return (dest);
}
