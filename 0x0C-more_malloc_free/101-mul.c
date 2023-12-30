#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

/**
 * is_digit - check if a string contains a non-digit char
 * @str: string to be checked
 *
 * Return: 0 if a nondigit is found and 1 if digit is found
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - function that return the length of a string
 * @str: string to be checked
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * error - Handle the main errors
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Program that multiplies two positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, total_len, i, remainder, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		error();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	total_len = len1 + len2 + 1;
	result = malloc(total_len * sizeof(int));
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		remainder = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			remainder += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = remainder % 10;
			remainder /= 10;
		}
		if (remainder > 0)
			result[len1 + len2 + 1] += remainder;
	}
	for (i = 0; i < total_len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
