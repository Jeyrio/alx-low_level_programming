#include <stdio.h>

/**
 * cap_string - Function that Capitalizes all words of a string
 * Seperators of words: Space, Tabulation, Newline
 *
 * @str: Pointer to a string to be capitalize
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			if (*(ptr - 1) == ' ' || *(ptr - 1) == '\t' || *(ptr - 1) == '\n')
			{
				if (ptr > str)
				{
					*ptr -= 32;
				}
			}
		}
		ptr++;
	}
	return (str);
}
