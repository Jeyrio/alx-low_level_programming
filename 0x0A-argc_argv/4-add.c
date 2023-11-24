#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Program that adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, sum;
	int num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");

				return (1);
			}
		}

		num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");

			return (1);
		}

		sum = sum + num;
	}

	printf("%d\n", sum);

	return (0);
}
