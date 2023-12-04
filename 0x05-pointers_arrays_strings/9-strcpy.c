#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *_strcpy - Function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 *
 * @dest: Destination
 * @src: Source
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
