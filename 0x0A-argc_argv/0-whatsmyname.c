#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count of a string
 * @argv: Argument vector of a string
 *
 * Return: Always 0 (Success)
 *
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
