#include "main.h"
#include <string.h>

/**
 * _strcmp - Function that compare two strings
 *
 * @s1: dest string to be compare
 * @s2: source string to compare
 *
 * Return: 0 if the strings are equal otherwise the difference
 * between the characters that don't match
 */
int _strcmp(char *s1, char *s2)
{
	int check = 0, i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			check = 1;
			break;
		}
	}

	if (check == 0)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
