#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase.
 *
 * @str: Pointer to the string to be converted to uppercase
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32; /* 32 is the difference between lower & uppercase */
		}
		ptr++;
	}

	return (str);
}
