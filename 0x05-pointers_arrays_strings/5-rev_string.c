#include "main.h"

/**
 * rev_string - Function that reverses a string
 *
 * @s: Pointer to reverse a string
 *
 * Return: Alwys 0 (Success)
 *
 */
void rev_string(char *s)
{
	int length = 0;
	char *start = s;
	char *end;

	while (s[length] != '\0')
	{
		length++;
	}

	end = s + length - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
