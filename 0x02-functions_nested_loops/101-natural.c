#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int sum = 0;
	int limit = 1024;

	for (int i = 1; i < limit; i++)
	{
		if (i % 3 = 0 || i % 5 = 0)
		{
			sum++;
		}
	}

	printf( "%d", sum);

	return (0);
}
