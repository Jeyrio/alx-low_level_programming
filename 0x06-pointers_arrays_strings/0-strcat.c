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
	strcat(dest, src);

	return (dest);
}
