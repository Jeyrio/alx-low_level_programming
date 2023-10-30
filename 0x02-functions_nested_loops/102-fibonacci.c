#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	long long int fib1 = 1;
	long long int fib2 = 2
	long long int next;
	int i;

	printf("%d, %d, , ", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		next = fib1 + fib2;

		printf("%d", next);

		if (i < 50)
		{
			printf(", ", i);
		}
		else
		{
			printf("\n");
		}

		fib1 = fib2;
		fib2 = next;
	}

	return (0);
}
