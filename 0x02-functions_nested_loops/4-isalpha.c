#include "main.h"
/**
 * _isalpha - Fuction that checks for alphabetic character
 *
 * @c: The character to be checked
 *
 * Return: 1 if the character is lowercase or uppercase letter or 0 otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	return (0);
}
