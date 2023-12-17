#include <stdlib.h>
#include "main.h"
#include "string.h"

/**
 * *argstostr - Function that concatenates all the arguments of your program
 *
 * @ac: integer to be checked
 * @av: character to be checked
 *
 * Return: NULL if ac is 0, or av is NULL
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j;
	size_t total_length = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	s = malloc((total_length + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; i < ac; i++)
	{
		strcpy(s + j, av[i]);
		j += strlen(av[i]);
		s[j] = '\n';
		j++;
	}

	s[j] = '\0';
	return (s);
}
