#include <stdio.h>

/**
 * main - Program that prints the number of arguments passed into it
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
