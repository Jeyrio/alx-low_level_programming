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
	int upperfirst_char = 1;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
		{
			if (upperfirst_char == 1)
			{
				if (*ptr >= 'a' && *ptr <= 'z')
				{
					*ptr -= 32;
				}
				upperfirst_char = 0;
			}
		}
		else
		{
			if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n')
			{
				upperfirst_char = 1;
			}
		}
		ptr++;
	}
	return (str);
}
